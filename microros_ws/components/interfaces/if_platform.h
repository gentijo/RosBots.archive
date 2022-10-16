
#ifndef _SENSOR_DATA_SRC_H_
#define _SENSOR_DATA_SRC_H_

#include <stdint.h>

#include "interfaces/if_I2C_driver.h"
#include "interfaces/if_platform.h"


class if_platform {
    
    public:
        virtual void                init()=0;
        virtual void                setI2CHostDriver(if_I2C_driver *i2c_driver)=0;
        virtual if_I2C_driver*      getI2CHostDriver()=0;
};


#endif

