#include "Timer.h"

Timer::Timer(Millisecondes ms_tick_time, std::function<void()> callback)
    : stopFlag(false), worker([=]() {
        while (!stopFlag) {
            std::this_thread::sleep_for(std::chrono::milliseconds(ms_tick_time));
            callback();
        }
    })
{}

Timer::~Timer() {
    stopFlag = true;
    if(worker.joinable()) worker.join(); // attendre la fin propre du thread
}