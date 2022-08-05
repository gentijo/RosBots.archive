#!/bin/bash

source /opt/ros/galactic/local_setup.bash

cd /opt/ros/rosdev_ws/agent
# bootstrap rosdep
rosdep init 
rosdep update

rosdep install --from-paths src --ignore-src -y
colcon build
colcon build --cmake-clean-cache --cmake-clean-first --cmake-force-configure

source install/local_setup.bash
ros2 run micro_ros_setup create_agent_ws.sh
ros2 run micro_ros_setup build_agent.sh
bash install/local_setup.bash
ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888
