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
digitalWrite(motorOneP , HIGH);
digitalWrite(motorOneN , LOW);
}

void moveRight(){
digitalWrite(motorOneP , HIGH);
digitalWrite(motorOneN , LOW);
}

void setup(){
// pin number 5-8 motor pins 
// pin number 5-6 motor one pin

// red = 5; // m1 a 
// white = 6; // m1 b
// pink = 7; // m2 a
// yellow = 8; // m2 b

// pin number 5-8 motor two pin
pinMode(motorOneP , OUTPUT);
pinMode(motorOneN , OUTPUT);
pinMode(motorTwoP , OUTPUT);
pinMode(motorTwoN , OUTPUT);
}

void loop(){
moveForward();
delay(1000);

moveBackward();
delay(1000);

// moveLeft();
// delay(1000);

// moveRight();
// delay(1000);

}