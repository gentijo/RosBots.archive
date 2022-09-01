#ifndef _ROS_SUBSCRIPTION_SPEC_H_
#define _ROS_SUBSCRIPTION_SPEC_H_

#include <stdlib.h>
#include <stdio.h>

class microros_app;

class ros_subscription_iface {
    public:
        virtual void attach(microros_app *app)=0;
        virtual void release()=0;
};

#endif
