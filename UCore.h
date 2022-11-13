//
// Created by Julien on 11/11/2022.
//
#pragma once
enum CORE_STATE { ENDING, RUNNING};

class UCORE {
private:
    CORE_STATE state;
public:
    UCORE();
    ~UCORE();

    CORE_STATE getState();
    void setState(CORE_STATE state);
};
