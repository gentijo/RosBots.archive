#ifndef _ROS_SUBSCRIPTION_SPEC_H_
#define _ROS_SUBSCRIPTION_SPEC_H_

#include <stdlib.h>
#include <stdio.h>

#include "interfaces/if_rtos.h"

class microros_app;

class if_ros_subscription {
    public:
        virtual void attach(microros_app *uros_app, if_RTOS *rtos)=0;
        virtual void release()=0;
};


#endif

