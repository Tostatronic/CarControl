#include <CarControll.h>
char option;
CarControl car = CarControl(3, 4, 5, 6, 2, 7, 210);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (!Serial.available()) {}
  option = Serial.read();
  switch (option)
  {
    case 'f':
      car.MoveFoward();
      break;
    case 'r':
      car.TurnToRight();
      break;
    case 'd':
      car.MoveBackward();
      break;
    case 'l':
      car.TurnToLeft();
      break;
    case 'm':
      car.SetSpeed(255);
      break;
    case 'n':
      car.SetSpeed(210);
      break;
    case 's':
      Serial.write("Stop");
      break;
  }
}

