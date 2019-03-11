#include <Wire.h>
#include "Motor.h"
#include "KantSensor.h"

Motor::Motor motor;
KantSensor::KantSensor kantsensor;

void setup()
{
}

void loop()
{
  kantsensor.KantDetektor();
}
