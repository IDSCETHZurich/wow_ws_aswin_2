from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='gps_publisher',
            executable='gps_node',
            name='gps_publisher',
            parameters=[
                {'publish_rate': 30},
                {'use_gps_time': True},
                {'check_fix_by_variance': True}
            ]
        ),
    ])