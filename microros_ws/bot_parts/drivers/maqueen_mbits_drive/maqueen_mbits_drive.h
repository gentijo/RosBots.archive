#ifndef _MAQUEEN_MBITS_DRIVE_H_
#define _MAQUEEN_MBITS_DRIVE_H_

#include <stdint.h>
#include <math.h>

#include "components/microros_app/microros_app.h"
#include "interfaces/locomotion_drive_iface.h"

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


#define LEFT_MOTOR_REGISTER 0X00
#define RIGHT_MOTOR_REGISTER  0X02
#define LEFT_DISTANCE_REGISTER 0x04
#define LEFT_DISTANCE_REGISTER 0x04
#define RIGHT_DISTANCE_REGISTER 0x06



class maqueen_mbits_drive : public locomotion_drive_iface {
    public:

        maqueen_mbits_drive(microros_app *app);

        // locomotion drive interface support
        void drive_forward(uint8_t speed, uint16_t distance);
        void drive_backward(uint8_t speed, uint16_t distance);
        void drive_turnLeft(uint8_t speed, uint8_t degrees, uint8_t radius);
        void drive_turnRight(uint8_t speed, uint8_t degrees, uint8_t radius);
        void drive_stop();

        uint16_t drive_readDistance(enum MotorID motor);
        void drive_clearDistance(enum MotorID motor);
        uint16_t drive_readSpeed(enum MotorID motor_id);
        uint16_t drive_readDirection(enum MotorID motor_id);

    private:
        uint8_t Maqueen_I2C_DevAddr = 0x10;
        microros_app* m_app;



};

#endif
