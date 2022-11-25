#include "freertos_app.h"



void freertos_app::init() {

};

rtos_base_type_t freertos_app::create_task(
      rtos_task_func_t taskFunction, const char *name, rtos_ubase_type_t stackDepth, 
      void *parameters, rtos_ubase_type_t priority, rtos_task_handle_t *task_handle) {

   return xTaskCreate(taskFunction, name, stackDepth, parameters, priority, task_handle);  
};


rtos_queue_handle_t freertos_app::queue_create(rtos_ubase_type_t queueLength, rtos_ubase_type_t queueItemSize) {

      return  xQueueCreate( queueLength, queueItemSize );
};

rtos_base_type_t freertos_app::queue_send(rtos_queue_handle_t queue_handle, const void *item, rtos_tick_type_t tickWait) {

      return  xQueueSend( queue_handle, item, tickWait );
};

rtos_base_type_t freertos_app::queue_receive(rtos_queue_handle_t queue_handle, void *itemBuffer, rtos_tick_type_t ticksToWait) {

      return xQueueReceive(queue_handle, itemBuffer, ticksToWait);
};

rtos_base_type_t freertos_app::queue_reset(rtos_queue_handle_t queue_handle) {

      return xQueueReset(queue_handle);
};
