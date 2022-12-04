
#include "ros_app.h"
#include "ros/esp_joystick_bit/esp_joystick_bit.h"

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
    init();
  
    printf("\r\nInit Subsystems Done");

};

void system_timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
    printf("\r\nMinimum free heap size: %u bytes\n", esp_get_minimum_free_heap_size());
    printf("\r\n        free heap size: %u bytes\n", esp_get_free_heap_size());
};

void ros_app::ROS_init_ok() {
    printf("\r\nROS Init OK\r\n");

    add_ros_subscription(new microros_timer_mgr(system_timer_callback, 1000));
    add_ros_publisher(new esp_joystick_bit());
}




