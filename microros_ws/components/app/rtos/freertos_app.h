#ifndef __FREERTOS_APP__
#define __FREERTOS_APP__

#include "interfaces/if_rtos.h"


class freertos_app : public if_RTOS {

    public:
        freertos_app() {}

        void init();

       rtos_base_type_t create_task(
            rtos_task_func_t taskFunction, const char *name, rtos_ubase_type_t usStackDepth, 
            void *parameters, rtos_ubase_type_t priority, rtos_task_handle_t *task_handle
        );  

        rtos_queue_handle_t queue_create(rtos_ubase_type_t queueLength, rtos_ubase_type_t queueItemSize);

        rtos_base_type_t queue_send(rtos_queue_handle_t queue_handle, const void *item, rtos_tick_type_t tickWait);

        rtos_base_type_t queue_receive(rtos_queue_handle_t queue_handle, void *itemBuffer, rtos_tick_type_t ticksToWait);
        
        rtos_base_type_t queue_reset(rtos_queue_handle_t queue_handle);

};

#endif
