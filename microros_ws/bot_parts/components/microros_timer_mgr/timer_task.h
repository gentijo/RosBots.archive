#ifndef __ROS_TIMER_TASK_MGR__
#define __ROS_TIMER_TASK_MGR__

#include "microros_timer_mgr.h"

class timer_task {
    public:
        void execute(microros_timer_mgr *tmgr);
};

#endif
