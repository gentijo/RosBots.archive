#ifndef __ESP32_I2C_H__
#define __ESP32_I2C_H__

#include <stdio.h>
#include "esp_log.h"
#include "driver/i2c.h"

esp_err_t __attribute__((unused)) i2c_host_read_device(i2c_port_t i2c_port, uint8_t dev_addr, uint8_t *data_rd, size_t size);
esp_err_t __attribute__((unused)) i2c_host_write_device(i2c_port_t i2c_port, uint8_t dev_addr, uint8_t *data_wr, size_t size);
esp_err_t i2c_host_init(uint8_t i2c_port);
esp_err_t i2c_device_init(uint8_t i2c_port);

#endif