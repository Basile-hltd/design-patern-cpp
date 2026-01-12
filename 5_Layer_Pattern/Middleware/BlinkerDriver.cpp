#include "BlinkerDriver.h"

BlinkerDriver::BlinkerDriver() : timer(1000, [this]() { this->TimerCallback(); }) {
}

void BlinkerDriver::TimerCallback(){
    ledHandler.Toggle_Led();
}
