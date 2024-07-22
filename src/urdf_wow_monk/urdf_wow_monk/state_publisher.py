from math import sin, cos, pi
import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Quaternion
from sensor_msgs.msg import JointState
from tf2_ros import TransformBroadcaster, TransformStamped


class StatePublisher(Node):

    def __init__(self):
        super().__init__('state_publisher')

        qos_profile = QoSProfile(depth=10)
        self.joint_pub = self.create_publisher(JointState, 'joint_states', qos_profile)
        self.broadcaster = TransformBroadcaster(self, qos=qos_profile)
        self.nodeName = self.get_name()
        self.get_logger().info(f"{self.nodeName} started")

        degree = pi / 180.0
        self.loop_rate = self.create_rate(30)

        # robot state
        self.angle = 0.0

        # Message declarations
        self.odom_trans = TransformStamped()
        self.odom_trans.header.frame_id = 'odom'
        self.odom_trans.child_frame_id = 'base_plate'

        self.joint_state = JointState()

        self.timer = self.create_timer(1.0 / 30.0, self.update_state)

    def update_state(self):
        now = self.get_clock().now()

        # Update joint_state
        self.joint_state.header.stamp = now.to_msg()
        self.joint_state.name = []  # No moving joints in this model
        self.joint_state.position = []

        # Update transform (moving in a circle with radius=2)
        self.odom_trans.header.stamp = now.to_msg()
        self.odom_trans.transform.translation.x = cos(self.angle) * 2
        self.odom_trans.transform.translation.y = sin(self.angle) * 2
        self.odom_trans.transform.translation.z = 0.0
        self.odom_trans.transform.rotation = self.euler_to_quaternion(0, 0, self.angle + pi / 2)

        # Send the joint state and transform
        self.joint_pub.publish(self.joint_state)
        self.broadcaster.sendTransform(self.odom_trans)

        # Update the angle for the next iteration
        self.angle += pi / 180.0
        if self.angle > 2 * pi:
            self.angle -= 2 * pi

    @staticmethod
    def euler_to_quaternion(roll, pitch, yaw):
        qx = sin(roll / 2) * cos(pitch / 2) * cos(yaw / 2) - cos(roll / 2) * sin(pitch / 2) * sin(yaw / 2)
        qy = cos(roll / 2) * sin(pitch / 2) * cos(yaw / 2) + sin(roll / 2) * cos(pitch / 2) * sin(yaw / 2)
        qz = cos(roll / 2) * cos(pitch / 2) * sin(yaw / 2) - sin(roll / 2) * sin(pitch / 2) * cos(yaw / 2)
        qw = cos(roll / 2) * cos(pitch / 2) * cos(yaw / 2) + sin(roll / 2) * sin(pitch / 2) * sin(yaw / 2)
        return Quaternion(x=qx, y=qy, z=qz, w=qw)


def main(args=None):
    rclpy.init(args=args)
    node = StatePublisher()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()