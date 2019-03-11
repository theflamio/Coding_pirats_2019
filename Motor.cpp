#include "Motor.h"

Motor::Motor(/* args */)
{
    ZumoMotors motors;
}

Motor::~Motor()
{
}

void Motor::SetSpeed(int motorSpeed)
{
    speed = motorSpeed;
}

void Motor::SetTurnSpeed(int motorTurnSpeed)
{
    turnSpeed = motorTurnSpeed;
}

int Motor::GetSpeed()
{
    return speed;
}

int Motor::GetTurnSpeed()
{
    return turnSpeed;
}

void Motor::Fremad()
{
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);
}

void Motor::Stop()
{
    motors.flipLeftMotor(false);
    motors.flipRightMotor(false);
    motors.setLeftSpeed(stop);
    motors.setRightSpeed(stop);
}

void Motor::Venstre()
{
    motors.flipRightMotor(false);
    motors.setLeftSpeed(turnSpeed);
    motors.setRightSpeed(turnSpeed);
}

void Motor::Hojre()
{
    motors.flipLeftMotor(false);
    motors.flipRightMotor(true);
    motors.setLeftSpeed(turnSpeed);
    motors.setRightSpeed(turnSpeed);
}

void Motor::Baglanse()
{
    motors.flipLeftMotor(true);
    motors.flipRightMotor(true);
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);
}