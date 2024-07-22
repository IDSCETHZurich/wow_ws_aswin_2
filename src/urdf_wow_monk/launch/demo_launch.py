import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():

    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    urdf_file_name = 'wow_monk.urdf.xml'
    urdf = os.path.join(
        get_package_share_directory('urdf_wow_monk'),
        urdf_file_name
    )

    with open(urdf, 'r') as infp:
        robot_desc = infp.read()

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='false',
            description='Use simulation (Gazebo) clock if true'),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'use_sim_time': use_sim_time, 'robot_description': robot_desc}],
            arguments=[urdf]),
        # Node(
        #     package='urdf_wow_monk',
        #     executable='state_publisher',
        #     name='state_publisher',
        #     output='screen'),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_base_to_bno055_1',
            output='screen',
            arguments=['0', '0', '0.1', '0', '0', '0', 'middle_box', 'bno055_1']
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_bno055_1_to_bno055',
            output='screen',
            arguments=['0', '0', '0.01', '0', '0', '0', 'middle_box', 'bno055']
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_middle_box_to_gps',
            output='screen',
            arguments=['0.2', '0', '0.1', '0', '0', '0', 'middle_box', 'gps']
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='static_transform_publisher_odom_to_base_plate',
            output='screen',
            arguments=['0', '0', '0', '0', '0', '0', 'odom', 'base_plate']
        ),
    ])