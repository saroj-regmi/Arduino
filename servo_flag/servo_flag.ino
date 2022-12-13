#include <Servo.h>

// creating hamroserver object
Servo hamroServo;

int servoPin = 7; // servo pin

void setup() {
hamroServo.attach(servoPin);
}

void loop() {
  hamroServo.write(720);
}
