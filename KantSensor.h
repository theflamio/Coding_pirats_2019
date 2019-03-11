#pragma once

#include <ZumoShield.h>
#include "States.h"
#include "Motor.h"

#define QTR_THRESHOLD  400 // microseconds
#define NUM_SENSORS 6

unsigned int sensor_values[NUM_SENSORS];

ZumoReflectanceSensorArray sensors(QTR_NO_EMITTER_PIN);

class KantSensor
{
public:
    KantSensor();
    ~KantSensor();
    KantDetektor();
private:

};

