#include <Servo.h>
Servo servo;
int servopin = 9;
int pot = A1;
int potval;

void setup() {
  servo.attach(servopin);
  pinMode(pot, INPUT);
}
void loop() {
 potval = analogRead(pot);
 potval = map(potval, 0, 1023 , 0, 180);
 servo.write(potval);
 delay(50);
}
