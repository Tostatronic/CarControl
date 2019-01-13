#include "CarControll.h"
CarControl::CarControl(uint8_t _motor1Pin1, uint8_t _motor1Pin2, uint8_t _motor2Pin1, uint8_t _motor2Pin2)
{
  //Set the Value to the class variables
  motor1Pin1=_motor1Pin1;
  motor1Pin2=_motor1Pin2;
  motor2Pin1=_motor2Pin1;
  motor2Pin2=_motor2Pin2;

  //Make the pin as an ouput
  pinMode(motor1Pin1,OUTPUT);
  pinMode(motor1Pin2,OUTPUT);
  pinMode(motor2Pin1,OUTPUT);
  pinMode(motor2Pin2,OUTPUT);

  //Set the default value as 0 "LOW"
  digitalWrite(motor1Pin1,LOW);
  digitalWrite(motor1Pin2,LOW);
  digitalWrite(motor2Pin1,LOW);
  digitalWrite(motor2Pin2,LOW);
}

//Put the new ctr with the enable pins and the initial motors speed
CarControl::CarControl(uint8_t _motor1Pin1, uint8_t _motor1Pin2, uint8_t _motor2Pin1, uint8_t _motor2Pin2, uint8_t _enableMotor1, uint8_t _enableMotor2, uint8_t _motorSpeed)
{
  //Set the Value to the class variables
  motor1Pin1=_motor1Pin1;
  motor1Pin2=_motor1Pin2;
  motor2Pin1=_motor2Pin1;
  motor2Pin2=_motor2Pin2;
  enableMotor1=_enableMotor1;
  enableMotor2=_enableMotor2;
  motorSpeed=_motorSpeed;

  //Make the pin as an ouput
  pinMode(motor1Pin1,OUTPUT);
  pinMode(motor1Pin2,OUTPUT);
  pinMode(motor2Pin1,OUTPUT);
  pinMode(motor2Pin2,OUTPUT);
  pinMode(enableMotor1,OUTPUT);
  pinMode(enableMotor2,OUTPUT);
  pinMode(motorSpeed,OUTPUT);


  //Set the default value as 0 "LOW"
  digitalWrite(motor1Pin1,LOW);
  digitalWrite(motor1Pin2,LOW);
  digitalWrite(motor2Pin1,LOW);
  digitalWrite(motor2Pin2,LOW);
  SetSpeed(_motorSpeed);
  digitalWrite(motorSpeed,LOW);
}

//We put the vakue to the motors to move them in the same 
void CarControl::MoveFoward()
{
  digitalWrite(motor1Pin1,HIGH);
  digitalWrite(motor1Pin2,LOW);
  digitalWrite(motor2Pin1,HIGH);
  digitalWrite(motor2Pin2,LOW);
}

void CarControl::MoveBackward()
{
  digitalWrite(motor1Pin1,LOW);
  digitalWrite(motor1Pin2,HIGH);
  digitalWrite(motor2Pin1,LOW);
  digitalWrite(motor2Pin2,HIGH);
}

void CarControl::TurnToRight()
{
  digitalWrite(motor1Pin1,HIGH);
  digitalWrite(motor1Pin2,LOW);
  digitalWrite(motor2Pin1,LOW);
  digitalWrite(motor2Pin2,HIGH);
}

void CarControl::TurnToLeft()
{
  digitalWrite(motor1Pin1,LOW);
  digitalWrite(motor1Pin2,HIGH);
  digitalWrite(motor2Pin1,HIGH);
  digitalWrite(motor2Pin2,LOW);
}

void CarControl::Stop()
{
  digitalWrite(motor1Pin1,LOW);
  digitalWrite(motor1Pin2,LOW);
  digitalWrite(motor2Pin1,LOW);
  digitalWrite(motor2Pin2,LOW);
}

void CarControl::SetSpeed(uint8_t _motorSpeed)
{
  motorSpeed=_motorSpeed;
  analogWrite(enableMotor1,_motorSpeed);
  analogWrite(enableMotor2,_motorSpeed);
}

