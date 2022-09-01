
#ifndef  __ROS_TIMER_MGR__
#define  __ROS_TIMER_MGR__

#include "interfaces/ros_subscription_iface.h"
#include "components/microros_app/microros_app.h"

class microros_timer_mgr : public ros_subscription_iface {
    public:
        microros_timer_mgr();
        void attach(microros_app *app);
        void release();

    private:
        microros_app *m_app;
        // Create timer.
        rcl_timer_t m_timer;
        unsigned int m_timer_timeout = 1000;
        unsigned int m_rcl_wait_timeout = 1000;   // in ms
};

#endif