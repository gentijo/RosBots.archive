# This is an auto generated Dockerfile for ros2:devel
# generated from docker_images_ros2/devel/create_ros_image.Dockerfile.em

ARG FROM_IMAGE=ubuntu:focal-20220801
FROM $FROM_IMAGE

#RUN echo "nameserver 8.8.8.8" >> /etc/resolv.conf
#RUN cat /etc/resolv.conf


# setup timezone
RUN echo 'Etc/UTC' > /etc/timezone && \
    ln -s /usr/share/zoneinfo/Etc/UTC /etc/localtime 

RUN apt -y update
RUN apt -y  upgrade
RUN apt -y clean

#RUN apt install -y tzdata
#RUN rm -rf /var/lib/apt/lists/*


# install packages
RUN apt-get update && apt-get install -q -y --no-install-recommends \
    bash-completion \
    dirmngr \
    gnupg2 \
    lsb-release \
    python3-pip \
    && rm -rf /var/lib/apt/lists/*

# setup sources.list
RUN echo "deb http://packages.ros.org/ros2/ubuntu focal main" > /etc/apt/sources.list.d/ros2-latest.list

# setup keys
RUN apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654

# setup environment
ENV LANG C.UTF-8
ENV LC_ALL C.UTF-8

# install bootstrap tools
RUN apt update
RUN apt install --no-install-recommends -y \
    build-essential \
    git \
    python3-colcon-common-extensions \
    python3-colcon-mixin \
    python3-rosdep \
    python3-vcstool 
RUN rm -rf /var/lib/apt/lists/*

# install python packages
RUN pip3 install -U \
    argcomplete \
    flake8 \
    flake8-blind-except \
    flake8-builtins \
    flake8-class-newline \
    flake8-comprehensions \
    flake8-deprecated \
    flake8-docstrings \
    flake8-import-order \
    flake8-quotes \
    pytest-repeat \
    pytest-rerunfailures

# This is a workaround for pytest not found causing builds to fail
# Following RUN statements tests for regression of https://github.com/ros2/ros2/issues/722
RUN pip3 freeze | grep pytest \
    && python3 -m pytest --version

RUN apt update
ENV DEBIAN_FRONTEND=noninteractive
RUN apt install -y ros-galactic-desktop


#RUN source /opt/ros/galactic/local_setup.bash

# clone source
ENV ROS2_WS /opt/ros/rosdev_ws
RUN mkdir -p $ROS2_WS
WORKDIR $ROS2_WS


RUN echo "source /opt/ros/galactic/local_setup.bash" >> ~/.bashrc


COPY ./files/ros_entrypoint.sh /opt/ros
#COPY ./files/ros_profile.sh /etc/profile.d

CMD ["bash"]