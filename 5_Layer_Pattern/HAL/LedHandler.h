#ifndef LEDHANDLER_H
#define LEDHANDLER_H

#include "Board/Led.h"
#include "Common/type.h"

class LedHandler{

    public:
        LedHandler();

        void Set_Led_ON();
        void Set_Led_OFF();
        void Toggle_Led();

    private:
        Led led;

        bool led_state;
};


#endif