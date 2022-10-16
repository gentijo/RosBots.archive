
#include "app/app_os/microros_app.h"
#include "app/platform/esp32_idf_app.h"
#include "app/rtos/freertos_app.h"


class mros_maqueen_esp32_freertos : public microros_app, public esp32_idf_app, public freertos_app {

    public:
        mros_maqueen_esp32_freertos(){

        };

        void init();

};