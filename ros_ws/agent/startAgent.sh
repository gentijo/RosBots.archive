#!/bin/bash
. /opt/ros/galactic/local_setup.sh
. /opt/ros/ros_ws/agent/install/local_setup.sh
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888