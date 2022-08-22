/* 0 - 180 degrees rotation
connect servo's signal pin to 9
*/

#include <Servo.h>
Servo servo;
int servopin = 9;


void setup() {
  servo.attach(servopin);
}
void loop() {
  servo.write(180); // go to 180 degrees
  delay(1000); // delay for 1 minuite
  servo.write(0); // go to 0 degrees
  delay(1000); // delay for 1 minuite
}
