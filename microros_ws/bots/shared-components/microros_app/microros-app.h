#ifndef __MICROROS_APP__
#define  __MICROROS_APP__

#include <stdio.h>
#include <stdlib.h>
#include <types.h>

class microros_app {
    public:
        uint8_t DOMAIN_ID = 0;
        char name_space[26] = "";
        char name[26] = "Maqueen-Atlo-Node";

        void init(void * arg);
};

#endif