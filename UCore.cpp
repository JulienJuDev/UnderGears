//
// Created by Julien on 11/11/2022.
//
#include "UCore.h"
#include <cstdio>

CORE_STATE UCORE::getState() {
    return this->state;
}
void UCORE::setState(CORE_STATE newState) {
    this->state = newState;
}

UCORE::UCORE() {
    this->state = CORE_STATE::RUNNING;
    printf("UCORE is running! \n");
}

UCORE::~UCORE() {
    printf("UCORE is terminated, bouh.");
}