#ifndef LED_H
#define LED_H

#include <iostream>

class Led{

public:
    Led();

    void Set(bool new_value);

private:
    bool state;
};


#endif