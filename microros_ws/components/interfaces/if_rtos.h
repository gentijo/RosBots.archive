
#ifndef _RTOS_H_
#define _RTOS_H_

#include <stddef.h>
#include <stdint.h>

#define FREE_RTOS

#ifdef FREE_RTOS

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"


typedef BaseType_t rtos_base_type_t;
typedef UBaseType_t rtos_ubase_type_t;

typedef TaskFunction_t rtos_task_func_t;
typedef TaskHandle_t rtos_task_handle_t;

typedef QueueHandle_t rtos_queue_handle_t;
typedef TickType_t rtos_tick_type_t;

#endif

class if_RTOS {

    public:
       virtual rtos_base_type_t create_task(
            rtos_task_func_t taskFunction, const char *name, rtos_ubase_type_t stackDepth, 
            void *parameters, rtos_ubase_type_t priority, rtos_task_handle_t *task_handle
        ) =0;  

        virtual rtos_queue_handle_t queue_create(rtos_ubase_type_t queueLength, rtos_ubase_type_t queueItemSize)=0;

        virtual rtos_base_type_t queue_send(rtos_queue_handle_t queue_handle, const void *item, rtos_tick_type_t tickWait)=0;

        virtual rtos_base_type_t queue_receive(rtos_queue_handle_t queue_handle, void *itemBuffer, rtos_tick_type_t ticksToWait)=0;
        
        virtual rtos_base_type_t queue_reset(rtos_queue_handle_t queue_handle)=0;

};

#endif

