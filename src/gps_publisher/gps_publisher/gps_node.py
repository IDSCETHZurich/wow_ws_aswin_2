#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import NavSatFix, NavSatStatus
import gps
from builtin_interfaces.msg import Time
from datetime import datetime


class GPSPublisher(Node):
    def __init__(self):
        super().__init__('gps_publisher')
        self.publisher_ = self.create_publisher(NavSatFix, 'gps/fix', 10)
        self.frame_id = 'gps'
        self.use_gps_time = self.declare_parameter('use_gps_time', True).value
        self.check_fix_by_variance = self.declare_parameter('check_fix_by_variance', True).value
        self.publish_rate = self.declare_parameter('publish_rate', 1).value

        self.gpsd = gps.gps(mode=gps.WATCH_ENABLE)

        self.timer = self.create_timer(1.0 / self.publish_rate, self.publish_gps_data)

    def publish_gps_data(self):
        try:
            self.gpsd.next()

            if self.gpsd.fix.mode >= 2:
                msg = NavSatFix()
                msg.header.frame_id = self.frame_id
                msg.header.stamp = self.get_clock().now().to_msg() if not self.use_gps_time else self.gps_time_to_ros_time(
                    self.gpsd.fix.time)
                msg.latitude = self.gpsd.fix.latitude
                msg.longitude = self.gpsd.fix.longitude
                msg.altitude = self.gpsd.fix.altitude

                # Check and set covariance
                if self.check_fix_by_variance and (self.gpsd.fix.epx is None or self.gpsd.fix.epy is None):
                    self.get_logger().debug("Invalid variance, skipping publish.")
                    # return
                else:
                    # Align covariance calculation with gps_umd logic
                    msg.position_covariance[0] = self.gpsd.fix.epx ** 2 if self.gpsd.fix.epx is not None else 0.0
                    msg.position_covariance[4] = self.gpsd.fix.epy ** 2 if self.gpsd.fix.epy is not None else 0.0
                    msg.position_covariance[8] = self.gpsd.fix.epv ** 2 if self.gpsd.fix.epv is not None else 0.0
                    msg.position_covariance_type = NavSatFix.COVARIANCE_TYPE_DIAGONAL_KNOWN

                # Set the status
                if self.gpsd.fix.mode == 2:
                    msg.status.status = NavSatStatus.STATUS_FIX
                elif self.gpsd.fix.mode == 3:
                    msg.status.status = NavSatStatus.STATUS_SBAS_FIX if self.gpsd.fix.status == gps.STATUS_DGPS_FIX else NavSatStatus.STATUS_GBAS_FIX

                msg.status.service = NavSatStatus.SERVICE_GPS

                self.publisher_.publish(msg)
                self.get_logger().info(f'Published GPS data: {msg}')

        except StopIteration:
            self.get_logger().warn('GPSD has stopped providing data. Reconnecting...')
            self.reconnect_gpsd()
        except Exception as e:
            self.get_logger().error(f'Error reading GPS data: {e}')
            self.reconnect_gpsd()

    def gps_time_to_ros_time(self, gps_time):
        """ Convert GPSD time format to ROS Time """
        try:
            if isinstance(gps_time, str):
                dt = datetime.fromisoformat(gps_time.replace('Z', '+00:00'))
                sec = int(dt.timestamp())
                nanosec = int((dt.timestamp() - sec) * 1e9)
                return Time(sec=sec, nanosec=nanosec)
            else:
                sec = int(gps_time)
                nanosec = int((gps_time - sec) * 1e9)
                return Time(sec=sec, nanosec=nanosec)
        except Exception as e:
            self.get_logger().error(f'Failed to convert GPS time: {e}')
            return self.get_clock().now().to_msg()

    def reconnect_gpsd(self):
        """ Reconnect to GPSD """
        try:
            self.gpsd = gps.gps(mode=gps.WATCH_ENABLE)
            self.get_logger().info('Reconnected to GPSD.')
        except Exception as e:
            self.get_logger().error(f'Failed to reconnect to GPSD: {e}')


def main(args=None):
    rclpy.init(args=args)
    node = GPSPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()