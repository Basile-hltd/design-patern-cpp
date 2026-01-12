#include "Bouteille.h"

Bouteille::Bouteille(){
    state = BottleState::Close;
}

Bouteille &Bouteille::GetInstance(){
    static Bouteille instance;
    return instance;
}

void Bouteille::Open(){
    state = BottleState::Open;
}

void Bouteille::Close(){
    state = BottleState::Close;
}

BottleState Bouteille::GetState(){
    return state;
}
