#include <Servo.h>
Servo servo;
int servopin = 9;
int button = 8;
int buttonval;

void setup() {
  servo.attach(servopin);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
 buttonval = digitalRead(button);
 if(buttonval==HIGH){
  servo.write(180);
  }
  else {
  servo.write(0);
  }
 Serial.println(buttonval);
 delay(50);
}
