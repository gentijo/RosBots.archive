#ifndef __ESP32_IDF_APP__
#define __ESP32_IDF_APP__

#include <sdkconfig.h>

#include "esp_log.h"
#include "esp_system.h"
#include "driver/uart.h"

#include "interfaces/if_I2C_driver.h"
#include "interfaces/if_platform.h"
#include "drivers/esp_I2C/esp_i2c.h"
#include "interfaces/if_ros_publisher.h"
#include "interfaces/if_ros_subscription.h"

#include "network_interfaces/uros_network_interfaces.h"

#define ESP_WIFI_SSID      CONFIG_ESP_WIFI_SSID
#define ESP_WIFI_PASS      CONFIG_ESP_WIFI_PASSWORD



class esp32_idf_app : public if_platform {

    public:
        esp32_idf_app() {}

        void                init();
        void                setI2CHostDriver(if_I2C_driver *i2c_driver);
        if_I2C_driver*      getI2CHostDriver();


    private:
        if_I2C_driver    *m_i2c_host_driver;

};

#endif
