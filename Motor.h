#pragma once
#include <ZumoShield.h>

class Motor
{
  public:
    Motor();
    ~Motor();

    void SetSpeed(int motorSpeed);
    void SetTurnSpeed(int motorTurnSpeed);
    int GetSpeed();
    int GetTurnSpeed();

    void Fremad();
    void Baglanse();
    void Venstre();
    void Hojre();
    void Stop();

  private:
    int speed = 400;
    int turnSpeed = 200;
    const int stop = 0;
    ZumoMotors motors;
};
