#include <Servo.h>

// creating hamroserver object
Servo hamroServo;
int servoPin = 7; // servo pin

// stores the command from the user
char command = 0;

void setup() {
//for the bluetooth module
Serial.begin(9600);



//servo motor
hamroServo.attach(servoPin);
}

void loop() {
  

//checking it the bluetooth module is available
if(Serial.available() > 0){
  command = Serial.read(); // reading the input of the user
  Serial.print(command);
  if(command == '1'){
     hamroServo.write(720);
    } 
}
   
 }
