
#include "app/app_os/microros_app.h"
#include "app/platform/esp32_idf_app.h"
#include "app/rtos/freertos_app.h"


class mros_maqueen_esp32_freertos {

    public:
        mros_maqueen_esp32_freertos(){

        };

        void initialize();

    public: 
        esp32_idf_app *m_platform;
        microros_app  *m_ros_app;
        freertos_app  *m_rtos;

};