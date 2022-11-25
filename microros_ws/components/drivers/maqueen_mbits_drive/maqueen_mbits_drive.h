#ifndef _MAQUEEN_MBITS_DRIVE_H_
#define _MAQUEEN_MBITS_DRIVE_H_

#include <stdint.h>
#include <math.h>

#include "maqueen.h"

#include "interfaces/if_locomotion_drive.h"
#include "interfaces/if_platform.h"
#include "interfaces/if_I2C_driver.h"

class maqueen_mbits_drive : public if_locomotion_drive {
    public:

        maqueen_mbits_drive(if_platform* platform) {
            printf("\r\n\nMBits Drive Const PLtform:%p  MBits Drive %p\r\n", platform, this);
            this->m_platform =  platform;
        }

        // locomotion drive interface support
        void drive_forward(uint8_t speed, uint16_t distance=0);
        void drive_backward(uint8_t speed, uint16_t distance=0);
        void drive_turnLeft(uint8_t speed, uint8_t degrees=0, uint8_t radius=0);
        void drive_turnRight(uint8_t speed, uint8_t degrees=0, uint8_t radius=0);
        void drive_stop();

        uint16_t drive_readDistance(enum MotorID motor);
        void drive_clearDistance(enum MotorID motor);
        uint16_t drive_readSpeed(enum MotorID motor_id);
        uint16_t drive_readDirection(enum MotorID motor_id);

    private:
        uint8_t Maqueen_I2C_DevAddr = 0x10;
        if_platform* m_platform;

};

#endif
