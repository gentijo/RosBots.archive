#ifndef _ROS_SUBSCRIPTION_SPEC_H_
#define _ROS_SUBSCRIPTION_SPEC_H_

#include <stdlib.h>
#include <stdio.h>


class if_microros_app;
class if_RTOS;

class if_ros_subscription {
    public:
        virtual void attach()=0;
        virtual void release()=0;
};


#endif

