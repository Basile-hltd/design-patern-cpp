#ifndef BLINKERDRIVER_H
#define BLINKERDRIVER_H

#include "HAL/LedHandler.h"
#include "RTOS/Timer.h"

class BlinkerDriver{

    public:
        BlinkerDriver(/* args */);

    private:
        void TimerCallback();

        LedHandler ledHandler;
        Timer timer;
};


#endif