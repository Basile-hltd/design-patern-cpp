
#include <iostream>
#include "Bouteille.h"

int main(){

    Bouteille & ref1 = Bouteille::GetInstance();
    Bouteille & ref2 = Bouteille::GetInstance();

    ref1.Close();
    ref2.Close();

    std::cout << "Inital ref 1 state : " << ref1.GetState() << std::endl;
    std::cout << "Inital ref 2 state : " << ref2.GetState() << std::endl;

    ref1.Open();

    // ref1 and ref2 reference the same and unique instance so the final state is the same for the 2 bottle 
    std::cout << "Final ref 1 state : " << ref1.GetState() << std::endl;
    std::cout << "Final ref 2 state : " << ref2.GetState() << std::endl;

    return 0;
}