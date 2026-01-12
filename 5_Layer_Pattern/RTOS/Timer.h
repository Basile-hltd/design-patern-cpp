#ifndef TIMER_H
#define TIMER_H

#include <thread>
#include <chrono>
#include <functional>
#include <atomic>
#include "Common/type.h"

class Timer
{
public:
    Timer(Millisecondes ms_tick_time, std::function<void()> callback);
    ~Timer();

private:
    std::atomic<bool> stopFlag;
    std::thread worker;
};

#endif