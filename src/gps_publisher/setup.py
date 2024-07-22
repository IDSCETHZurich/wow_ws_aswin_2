from setuptools import find_packages, setup
import os
from glob import glob
package_name = 'gps_publisher'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
	    (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),  # Include launch files

    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='pi',
    maintainer_email='aswinkarthik.rv@gmail.com',
    description='Receives data from GPSD socket using official gpsd-clients and publishes ros2 navsatfix message with position covariance. Handles reconnection of gpsd client.',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': ['gps_node = gps_publisher.gps_node:main',
        ],
    },
)
