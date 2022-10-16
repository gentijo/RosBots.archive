
#ifndef  __ROS_TIMER_MGR__
#define  __ROS_TIMER_MGR__

#include "interfaces/if_ros_subscription.h"
#include "app/app_os/microros_app.h"

class microros_timer_mgr : public if_ros_subscription {
    public:
        microros_timer_mgr();
        void attach(microros_app *uros_app, if_RTOS *rtos);
        void release();

    private:
        static void             timer_callback(rcl_timer_t *timer, int64_t last_call_time);
        static microros_app*    s_uros_app;
        static if_RTOS*		    s_rtos;  



        // Create timer.
        rcl_timer_t m_timer;
        unsigned int m_timer_timeout = 1000;
        unsigned int m_rcl_wait_timeout = 1000;   // in ms

};

#endif