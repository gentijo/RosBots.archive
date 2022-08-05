NODENAME=$1
WORKSPACE=$2

docker run --privileged -it \
--name $NODENAME  \
-h $NODENAME \
--net=my-ipvlan2 \
--env DISPLAY=host.docker.internal:0 \
--env XAUTHORITY=/root/.Xauthority \
rosimg bash

#-v /home/gentijo/Projects/ROS-Projects/tutorial_ws/src/ros_tutorials:/opt/ros/dev-ws/src/ros_tutorials \
