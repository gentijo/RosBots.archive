#ifndef __ESP32_I2C_H__
#define __ESP32_I2C_H__

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

#include "esp_log.h"
#include "driver/i2c.h"
#include "interfaces/if_I2C_driver.h"

#include "sdkconfig.h"

#define DATA_LENGTH 512                  /*!< Data buffer length  */


#define I2C_DEVICE_SCL_IO CONFIG_I2C_DEVICE_SCL               /*!< gpio number for i2c device clock */
#define I2C_DEVICE_SDA_IO CONFIG_I2C_DEVICE_SDA               /*!< gpio number for i2c device data */

#define I2C_DEVICE_TX_BUF_LEN (2 * DATA_LENGTH)              /*!< I2C device tx buffer size */
#define I2C_DEVICE_RX_BUF_LEN (2 * DATA_LENGTH)              /*!< I2C device rx buffer size */

#define I2C_HOST_SCL_IO CONFIG_I2C_HOST_SCL               /*!< gpio number for I2C master clock */
#define I2C_HOST_SDA_IO CONFIG_I2C_HOST_SDA               /*!< gpio number for I2C master data  */

#define I2C_HOST_FREQ_HZ CONFIG_I2C_HOST_FREQUENCY        /*!< I2C master clock frequency */
#define I2C_HOST_TX_BUF_DISABLE 1                           /*!< I2C master doesn't need buffer */
#define I2C_HOST_RX_BUF_DISABLE 1                           /*!< I2C master doesn't need buffer */

#define ESP_DEVICE_ADDR CONFIG_I2C_DEVICE_ADDRESS /*!< ESP32 device address, you can set any 7bit value */

#define WRITE_BIT I2C_MASTER_WRITE              /*!< I2C master write */
#define READ_BIT I2C_MASTER_READ                /*!< I2C master read */

#define ACK_CHECK_EN 0x1                        /*!< I2C master will check ack from device*/
#define ACK_CHECK_DIS 0x0                       /*!< I2C master will not check ack from device */
#define ACK_VAL 0x0                             /*!< I2C ack value */
#define NACK_VAL 0x1                            /*!< I2C nack value */


class esp_I2C : public if_I2C_driver {
    public:

        void       initialize(uint8_t _i2c_port, bool host_mode);

        int8_t     readBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data, uint16_t timeout);
        bool       writeBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data);
        bool       selectRegister(uint8_t devAddr, uint8_t regAddr);

        int8_t readBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t *data, uint16_t timeout) {
            printf("Not implemented");
            return 0;
        };

        int8_t readBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t *data, uint16_t timeout) {
            printf("Not implemented");
            return 0;

        };

        int8_t readByte(uint8_t devAddr, uint8_t regAddr, uint8_t *data, uint16_t timeout){
            printf("Not implemented");
            return 0;
        };
        
        int8_t readWord(uint8_t devAddr, uint8_t regAddr, uint16_t *data, uint16_t timeout){
            printf("Not implemented");
            return 0;
        };
 
        bool writeBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t data){
            printf("Not implemented");
            return 0;
        };
        
        bool writeBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t data){
            printf("Not implemented");
            return 0;
        };
        
        bool writeByte(uint8_t devAddr, uint8_t regAddr, uint8_t data){
            printf("Not implemented");
            return 0;
        };
        
        bool writeWord(uint8_t devAddr, uint8_t regAddr, uint16_t data){
            printf("Not implemented");
            return 0;
        };
        
        
    private:
        uint8_t         i2c_port = I2C_NUM_0;
        uint16_t        readTimeout = 0; //I2CDEV_DEFAULT_READ_TIMEOUT;        
        

};

#endif