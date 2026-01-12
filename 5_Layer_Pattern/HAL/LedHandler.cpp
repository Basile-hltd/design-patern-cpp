#include "LedHandler.h"

LedHandler::LedHandler(){
    Set_Led_OFF();
}

void LedHandler::Set_Led_ON(){
    led.Set(LED_ON);
    led_state = LED_ON;
}

void LedHandler::Set_Led_OFF(){
    led.Set(LED_OFF);
    led_state = LED_OFF;
}

void LedHandler::Toggle_Led(){
    if (led_state){
        Set_Led_OFF();
    }
    else{
        Set_Led_ON();
    }
}


