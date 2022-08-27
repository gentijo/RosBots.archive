
#ifndef MAQUEEN_H
#define MAQUEEN_H

#include <stdio.h>

enum PIN
{
    P0 = 3,
    P1 = 2,
    P2 = 1,
    P8 = 18,
    P9 = 10,
    P12 = 20,
    P13 = 23,
    P14 = 22,
    P15 = 21,
};

enum MotorID
{
    Motor_Left = 1,
    Motor_Right = 2,
    Both_Motors = 3
};

enum MotorDir
{
    Motor_Forward = 1,
    Motor_Reverse = 2
};

enum ServoID
{
    S1 = 1,
    S2 = 2,
    S3 = 3
};

enum RGBLightID
{
    RGBL = 1,
    RGBR = 2,
    RGBA = 3
};



enum Color
{
    RED = 1,
    GREEN = 2,
    BLUE = 4,
    YELLOW = 3,
    PINK = 5,
    CYAN = 6,
    WHITH = 7,
    OFF = 8

};

enum LineSensorID{
    eL1,
    eM,
    eR1,
    eL2,
    eR2,
};



#define ADC0_REGISTER 0X1E
#define ADC1_REGISTER 0X20
#define ADC2_REGISTER 0X22
#define ADC3_REGISTER 0X24
#define ADC4_REGISTER 0X26

#define LEFT_LED_REGISTER 0X0B
#define RIGHT_LED_REGISTER 0X0C

#define LEFT_MOTOR_REGISTER 0X00
#define RIGHT_MOTOR_REGISTER  0X02

#define LINE_STATE_REGISTER 0X1D

#define VERSION_CNT_REGISTER 0X32
#define VERSION_DATA_REGISTER 0X33

#endif
