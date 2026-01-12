#ifndef BOUTEILLE_H
#define BOUTEILLE_H

#include <iostream>

enum BottleState{
    Open = 1,
    Close = 0
};

inline std::ostream& operator<<(std::ostream& os, BottleState state) {
    switch(state) {
        case Open:  os << "Opened"; break;
        case Close: os << "Closed"; break;
        default:    os << "Unknown"; break;
    }
    return os;
}

class Bouteille{
    
    public:
        static Bouteille & GetInstance();

        void Open();
        void Close();
        BottleState GetState();

    private:
        Bouteille();

        BottleState state;
        
};


#endif