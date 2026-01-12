#include "Led.h"

Led::Led(){}

void Led::Set(bool new_value){

    if (state != new_value){

        if(new_value){
            std::cout << "Led ON" << std::endl;
        }
        else{
            std::cout << "Led OFF" << std::endl;
        }

    }
 
    state = new_value;

}
