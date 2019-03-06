#include <Wire.h>
#include <ZumoShield.h>

ZumoBuzzer buzzer;
ZumoMotors motors;
Pushbutton button(ZUMO_BUTTON); // pushbutton on pin 12

#define speed 200

#define stop 0

#define LED 13

#define QTR_THRESHOLD  400 // microseconds

#define NUM_SENSORS 6
unsigned int sensor_values[NUM_SENSORS];

ZumoReflectanceSensorArray sensors(QTR_NO_EMITTER_PIN);

void waitForButtonAndCountDown()
{
  digitalWrite(LED, HIGH);
  button.waitForButton();
  digitalWrite(LED, LOW);

  // play audible countdown
  for (int i = 0; i < 3; i++)
  {
    delay(1000);
    buzzer.playNote(NOTE_G(3), 200, 15);
  }
  delay(1000);
  buzzer.playNote(NOTE_G(4), 500, 15);
  delay(1000);
}

void setup()
{
  waitForButtonAndCountDown();
  pinMode(LED, HIGH);
  // uncomment one or both of the following lines if your motors' directions need to be flipped
  //motors.flipLeftMotor(true);
  //motors.flipRightMotor(true);
}

void loop()
{
  // run left motor forward
kantSensor(); 
    
}

void fremad()
{
  motors.setLeftSpeed(speed);
  motors.setRightSpeed(speed);   
}

void Stop()
{
  motors.flipLeftMotor(false);
  motors.flipRightMotor(false);
 motors.setLeftSpeed(stop);
 motors.setRightSpeed(stop);
}

void venstre()
{
  motors.flipLeftMotor(true);
  motors.flipRightMotor(false);
  motors.setLeftSpeed(speed);
  motors.setRightSpeed(speed);
}

void hojre()
{
  motors.flipLeftMotor(false);
  motors.flipRightMotor(true);
  motors.setLeftSpeed(speed);
  motors.setRightSpeed(speed);
}

void baglanse()
{
  motors.flipLeftMotor(true);
  motors.flipRightMotor(true);
 motors.setLeftSpeed(speed);
 motors.setRightSpeed(speed);
}

void kantSensor()
{
 sensors.read(sensor_values);
 
 if (sensor_values[0] < QTR_THRESHOLD)
  {
    // if leftmost sensor detects line, reverse and turn to the right
    baglanse();
    delay(200);
    hojre();
    delay(200);
    Stop();
    delay(200);
  }
  else if (sensor_values[5] < QTR_THRESHOLD)
  {
    // if rightmost sensor detects line, reverse and turn to the left
    baglanse();
    delay(200);
    venstre();
    delay(200);
    Stop();
    delay(200);
  }
  else
  {
    // otherwise, go straight
    fremad();
  }
}
