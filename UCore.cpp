//
// Created by Julien on 11/11/2022.
//
#include <iostream>
#include "UCore.h"

CORE_STATE UCORE::getState() {
    return this->state;
}
void UCORE::setState(CORE_STATE newState) {
    this->state = newState;
}

UCORE::UCORE() {
    this->state = CORE_STATE::RUNNING;
    std::cout << "UCORE is running!";
}

UCORE::~UCORE() {
    std::cout << "UCORE is terminated, bouh";
}