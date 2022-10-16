#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "maqueen.h"

uint8_t Maqueen_I2C_Port = 1;
uint8_t Maqueen_I2C_DevAddr = 0x10;

boolean maqueen_readLineSensorState(enum LineSensorID sensor_id)
{
    uint8_t buf[1]={LINE_STATE_REGISTER};
    i2c_host_write_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, buf, 1);

    uint8_t data;
    i2c_host_read_device(Maqueen_I2C_Port, Maqueen_I2C_DevAddr, &data, 1);

    boolean state;
    switch (sensor_id)
    {
    case eL1:
        state = (data & 0x08) == 0x08 ? 1 : 0;
        break;
    case eM:
        state = (data & 0x04) == 0x04 ? 1 : 0;
        break;
    case eR1:
        state = (data & 0x02) == 0x02 ? 1 : 0;
        break;
    case eL2:
        state = (data & 0x10) == 0X10 ? 1 : 0;
        break;
    default:
        state = (data & 0x01) == 0x01 ? 1 : 0;
        break;
    }
    return state;
}

void maqueen_readLineSensorData(enum LineSensorID sensor_id)
{

    // let data;
    switch (sensor_id)
    {

    case eR2:
        pins.i2cWriteNumber(I2CADDR, ADC0_REGISTER, NumberFormat.Int8LE);
        let adc0Buffer = pins.i2cReadBuffer(I2CADDR, 1);
        data = adc0Buffer[1] << 8 | adc0Buffer[0] break;

    case eR1:
        pins.i2cWriteNumber(I2CADDR, ADC1_REGISTER, NumberFormat.Int8LE);
        let adc1Buffer = pins.i2cReadBuffer(I2CADDR, 2);
        data = adc1Buffer[1] << 8 | adc1Buffer[0];
        break;

    case eM:
        pins.i2cWriteNumber(I2CADDR, ADC2_REGISTER, NumberFormat.Int8LE);
        let adc2Buffer = pins.i2cReadBuffer(I2CADDR, 2);
        data = adc2Buffer[1] << 8 | adc2Buffer[0];
        break;

    case eL1:
        pins.i2cWriteNumber(I2CADDR, ADC3_REGISTER, NumberFormat.Int8LE);
        let adc3Buffer = pins.i2cReadBuffer(I2CADDR, 2);
        data = adc3Buffer[1] << 1 | adc3Buffer[0];
        break;

    default:
        pins.i2cWriteNumber(I2CADDR, ADC4_REGISTER, NumberFormat.Int8LE);
        let adc4Buffer = pins.i2cReadBuffer(I2CADDR, 2);
        data = adc4Buffer[1] << 8 | adc4Buffer[0];
        break;
    }
    return data;
}

int readUltrasonicRange(trig
                        : DigitalPin, echo
                        : DigitalPin)
{

    let data;
    pins.digitalWritePin(trig, 1);
    basic.pause(1);
    pins.digitalWritePin(trig, 0) 
    
    if (pins.digitalReadPin(echo) == 0)
    {
        pins.digitalWritePin(trig, 1);
        pins.digitalWritePin(trig, 0);
        data = pins.pulseIn(echo, PulseValue.High, 500 * 58);
    }
    else
    {
        pins.digitalWritePin(trig, 0);
        pins.digitalWritePin(trig, 1);
        data = pins.pulseIn(echo, PulseValue.High, 500 * 58)
    }
    data = data / 39;
    if (data <= 0 || data > 500)
        return 0;
    return round(data);
}
