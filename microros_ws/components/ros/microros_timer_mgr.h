
#ifndef  __ROS_TIMER_BASE__
#define  __ROS_TIMER_BASE__

#include "interfaces/if_ros_subscription.h"
#include "interfaces/if_microros_app.h"
#include "interfaces/if_ros_app.h"


typedef void(*timer_function_t)(rcl_timer_t *timer, int64_t last_call_time);

class microros_timer_mgr : public if_ros_subscription {
    public:
        microros_timer_mgr( timer_function_t callback, unsigned int period  ) {
                m_timer_callback = callback;
                m_timer_period = period; 
        };

        void attach();
        void release();

    private:        
        rcl_timer_t m_timer;
        timer_function_t m_timer_callback;
        int m_timer_period;

};

#endif