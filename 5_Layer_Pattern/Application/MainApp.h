#ifndef MAINAPP_H
#define MAINAPP_H

#include "Middleware/BlinkerDriver.h"

class MainApp{
    public:
        MainApp();

    private:
        BlinkerDriver blinkerDriver;
};
#endif