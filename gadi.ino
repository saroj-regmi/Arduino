char input;


// motor one
int motorOneP = 5;
int motorOneN = 6;

// motor two 
int motorTwoP = 7;
int motorTwoN = 8;


void moveForward(){
digitalWrite(motorOneP , HIGH);
digitalWrite(motorOneN , LOW);
digitalWrite(motorTwoP , HIGH);
digitalWrite(motorTwoN , LOW);
}

void moveBackward(){
digitalWrite(motorOneP , LOW);
digitalWrite(motorOneN , HIGH);
digitalWrite(motorTwoP , LOW);
digitalWrite(motorTwoN , HIGH);
}

void moveLeft(){
    // motor one in the forward direction
digitalWrite(motorOneP , HIGH);
digitalWrite(motorOneN , LOW);

// motor two in the back direction
digitalWrite(motorTwoP , LOW);
digitalWrite(motorTwoN , HIGH);


}

void moveRight(){
    // motor one in the back direction
digitalWrite(motorOneP , LOW);
digitalWrite(motorOneN , HIGH);

// motor two in the forward direction
digitalWrite(motorTwoP , HIGH);
digitalWrite(motorTwoN , LOW);
}

void stopMoving(){
// motor one in the stop 
digitalWrite(motorOneP , LOW);
digitalWrite(motorOneN , LOW);

// motor two in the stop
digitalWrite(motorTwoP , LOW);
digitalWrite(motorTwoN , LOW);
}


void setup(){
// pin number 5-8 motor pins 
// pin number 5-6 motor one pin

// red = 5; // m1 a 
// white = 6; // m1 b
// pink = 7; // m2 a
// yellow = 8; // m2 b
// tx = orange
// rx = white

// pin number 5-8 motor two pin
pinMode(motorOneP , OUTPUT);
pinMode(motorOneN , OUTPUT);
pinMode(motorTwoP , OUTPUT);
pinMode(motorTwoN , OUTPUT);

// for the bt module
Serial.begin(9600);

}

void loop(){
if(Serial.available()){
  input = Serial.read();
  Serial.println(input);
}


if(input == 'F'){
moveForward();
Serial.println("Moving forward");
}

if(input == 'B'){
moveBackward();
Serial.println("Moving backward");
}

if(input == 'L'){
moveLeft();
Serial.println("Moving Left");
}

if(input == 'R'){
moveRight();
Serial.println("Moving Right");
}

if(input == 'S'){
stopMoving();
Serial.println("Moving stopped");
}
}