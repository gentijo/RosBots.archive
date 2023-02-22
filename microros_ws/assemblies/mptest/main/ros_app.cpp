
#include <stdint.h>
#include <stdio.h>
#include <string.h>

#include "ros_app.h"

extern "C" {
#include "py/builtin.h"
#include "py/compile.h"
#include "py/runtime.h"
#include "py/repl.h"
#include "py/gc.h"
#include "py/mperrno.h"
#include "shared/runtime/pyexec.h"

void mp_app_main(void);

}


if_ros_app* g_ros_app;

extern "C" void app_main() {
    g_ros_app = new ros_app();
    g_ros_app->initialize();
}


void ros_app::initialize() {
    
    printf("\r\nInit Subsystems");

    m_platform = new esp32_idf_app();
    m_rtos = new freertos_app();
 
    m_rtos->init();
    m_platform->init();
    
    printf("\r\nFree memory: %d bytes", esp_get_free_heap_size());
    
    init();

    printf("\r\nFree memory: %d bytes", esp_get_free_heap_size());

    printf("\r\nInit Subsystems Done");

};

void system_timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
	printf("Timer Callback\n");
};

void ros_app::ROS_init_ok() {
    printf("\r\nROS Init OK\r\n");

    mp_app_main();
    
//    add_ros_subscription(new microros_timer_mgr(system_timer_callback, 1000));
}
 