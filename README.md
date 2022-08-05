# ESP32 Maqueen Battle Bots

This project consists of MicroROS running on an ESP32 and ROS2 running on a Host computer. 

The ESP32 based Turtle bot consists of off the shelf parts 

https://www.dfrobot.com/product-1783.html

<p align="center">
  <img width="300" height="300" src="./docs/ROB0148-EN.png">
</p>


and the MBits ESP32 replacement for a MicroBit boaord.
https://www.elecrow.com/mbits.html


<p align="center">
  <img width="300" height="300" src="./docs/mbits.png">
  &nbsp;&nbsp;
  <img width="300" height="300" src="./docs/mbits_1.png">
</p>

<p align="center">
 
</p>

---

# **The Development Environment**

The development enviroment will consist of 2 docker containers.
One Docker container will run the Host ROS2 system
Anther Docker container will act as the Build/Debug platform for the ESP32 code / MicroROS.

---

## **Create the Docker container for Esp32 Maqueen Turtlebot**
Clone this repository on to your host system
From the top level directory, run the following commands.



### **Build the Docker Image**
- **docker build -t mros-esp32-idf docker/microros-espidf/**

---

### **Launch the container**

- **sh docker/microros-espidf/startNode.sh**

---

### **Compile the ESP32 code from within the container**

Execute a bash shell to attach to the container then execute the following commands

- **cd /opt/microros/bots/maqueen-esp32**

- **source /opt/esp/idf/export.sh**

- **idf.py fullclean**

- **idf.py reconfigure**

- **idf.py build**

---

### **Upload the code to the ESP32 board**
Connect the MBits board to your host computer and using the USB connection and run the following commands

- **idf.py flash**

Once the code is uploaded to the board, you can observe basic logging using the built in Serial Monitor.

- **idf.py monitor**

---
## To Create the Docker that will run the Host System
From the top level directory execute

- **docker build -t rosimg ./docker/ros/** 

- **sh docker/ros/startNodeUnix.sh rosn10**

### To compile and run the MicroROS Agent code

Execute the following commands

- **cd /opt/ros/ros_ws/agent**

- **source /opt/ros/galactic/local_setup.bash**

- **source install/local_setup.bash**

- **rosdep init**

- **rosdep update**

- **rosdep install --from-paths src --ignore-src -y**

- **colcon build --cmake-clean-cache --cmake-clean-first --cmake-force-configure**

### To run the MicroROS Agent
Execute the following commands

- **source install/local_setup.bash**

- **ros2 run micro_ros_agent micro_ros_agent udp4 --port 8888**

