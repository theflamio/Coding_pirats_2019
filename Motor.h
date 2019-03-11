#pragma once

#include <ZumoShield.h>

class Motor
{
  public:
    Motor();
    ~Motor();

    SetSpeed(int motorSpeed);
    SetTurnSpeed(int motorTurnSpeed);
    GetSpeed();
    GetTurnSpeed();

    Fremad();
    Baglanse();
    Venstre();
    Hojre();
    Stop();

  private:
    int speed 400;
    int turnSpeed 200;
    const int stop = 0;
};
