#ifndef __MICROROS_APP__
#define __MICROROS_APP__


#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"


#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>


#ifdef CONFIG_MICRO_ROS_ESP_XRCE_DDS_MIDDLEWARE
#include <rmw_microros/rmw_microros.h>
#endif

#include "I2Cdev.h"

#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

class microros_app {
    public:
        microros_app();

        void init();

    private:
        uint8_t m_domain_id = 0;
        char    m_namespace[26] = "";
        char    m_name[26] = "Maqueen-Atlo-Node";


        I2Cdev              m_i2c_driver_host;

        rcl_allocator_t     m_allocator;
        rclc_support_t      m_support;
        rcl_init_options_t  m_init_options;
        rcl_node_t          m_node;
        rclc_executor_t     m_executor;

};

#endif