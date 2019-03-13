#include "KantSensor.h"

KantSensor::KantSensor()
{
}

KantSensor::~KantSensor()
{
}

// In the futhere this function must return and int for the state machine
void KantSensor::KantDetektor()
{
    sensors.read(sensor_values);

    if (sensor_values[0] < QTR_THRESHOLD)
    {
        motor.Stop();
    }
    else if (sensor_values[5] < QTR_THRESHOLD)
    {
        motor.Stop();
    }
    else
    {
        motor.Fremad();
    }
}