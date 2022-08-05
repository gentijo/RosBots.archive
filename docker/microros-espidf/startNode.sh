export NODENAME=mros-esp32-idf

docker rm $NODENAME

docker run -it \
 --name $NODENAME \
 -h $NODENAME \
 --privileged  \
 -v `pwd`/microros_ws:/opt/microros_ws  \
 -v /dev:/dev \
 mros-esp32-idf bash 

 

