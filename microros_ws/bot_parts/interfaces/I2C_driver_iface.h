
#ifndef _I2C_DRIVER_SPEC_H_
#define _I2C_DRIVER_SPEC_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


class I2C_driver_iface {
    public:

        void initialize(uint8_t _i2c_port, bool host_mode);
        void enable(bool isEnabled);

        virtual int8_t readBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t *data, uint16_t timeout) = 0;
        virtual int8_t readBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t *data, uint16_t timeout) = 0;
        virtual int8_t readByte(uint8_t devAddr, uint8_t regAddr, uint8_t *data, uint16_t timeout) = 0;
        virtual int8_t readWord(uint8_t devAddr, uint8_t regAddr, uint16_t *data, uint16_t timeout) = 0;
        virtual int8_t readBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data, uint16_t timeout)=0;
 
        virtual bool writeBit(uint8_t devAddr, uint8_t regAddr, uint8_t bitNum, uint8_t data)=0;
        virtual bool writeBits(uint8_t devAddr, uint8_t regAddr, uint8_t bitStart, uint8_t length, uint8_t data)=0;
        virtual bool writeByte(uint8_t devAddr, uint8_t regAddr, uint8_t data) = 0;
        virtual bool writeWord(uint8_t devAddr, uint8_t regAddr, uint16_t data) = 0;
        virtual bool writeBytes(uint8_t devAddr, uint8_t regAddr, uint8_t length, uint8_t *data) = 0;
};

#endif

