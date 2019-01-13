#ifndef CAR_CONTROL_H
#define CAR_CONTROL_H
#include <Arduino.h>
#include <MotorControll.h>
class CarControl
{
  public:
    CarControl(uint8_t _motor1Pin1, uint8_t _motor1Pin2, uint8_t _motor2Pin1, uint8_t _motor2Pin2);
    CarControl(uint8_t _motor1Pin1, uint8_t _motor1Pin2, uint8_t _motor2Pin1, uint8_t _motor2Pin2, uint8_t _enableMotor1, uint8_t _enableMotor2, uint8_t _motorSpeed);
    void MoveFoward();
    void MoveBackward();
    void TurnToRight();
    void TurnToLeft();
    void Stop();
    void SetSpeed(uint8_t speed);
  private:
    uint8_t motor1Pin1,motor1Pin2,motor2Pin1,motor2Pin2, enableMotor1, enableMotor2, motorSpeed;
};
#endif
