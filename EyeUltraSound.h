#pragma once
#include "IEyeSensor.h"
#include "Newping.h"



class EyeUltraSound : public IEyeSensor
{
public:
    EyeUltraSound();
    ~EyeUltraSound();
    float Afstand();

private:
    const int TRIGGER_PIN = 2;
    const int ECHO_PIN = 11;
    const int MAX_DISTANCE = 200;
};

