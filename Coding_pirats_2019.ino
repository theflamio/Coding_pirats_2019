#include "Motor.h"
#include "KantSensor.h"
#include "EyeUltraSound.h"

Motor motor;
KantSensor kantSensor;
EyeUltraSound eyeSensor;

void setup()
{
}

void loop()
{
  kantSensor.KantDetektor();
  motor.Fremad();
  eyeSensor.afstand();
}
