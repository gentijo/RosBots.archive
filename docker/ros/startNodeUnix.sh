NODENAME=$1
WORKSPACE=$2

#--net=my-dhcp-net \
    
docker run --privileged -it \
--name $NODENAME  \
-h $NODENAME \
--env DISPLAY=$DISPLAY \
--env XAUTHORITY=/root/.Xauthority \
-v $XAUTHORITY:/root/.Xauthority \
-v /tmp/.X11-unix:/tmp/.X11-unix \
-v `pwd`/ros_ws/:/opt/ros/ros_ws/  \
-p 8888:8888/udp \
rosimg bash
