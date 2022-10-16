
#ifndef _SENSOR_DATA_SRC_H_
#define _SENSOR_DATA_SRC_H_

#include <stdint.h>

struct device_data_info {

    char     description[25];
    uint8_t  regCount;
    struct reg_data {
        uint8_t size;
        uint8_t* data;
    } reg_data[20];

};

typedef struct device_data_info device_data_info_t;

class if_device_data_source {
    
    public:
        device_data_info_t* getSensorDataInfo();
        void*               getSensorData();

};


#endif

