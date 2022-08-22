#include <NewPing.h>

int trigPin = 2;
int echoPin = 3;

NewPing sonar(trigPin, echoPin); 
void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(50);
  Serial.print("Distance = ");
  Serial.print(sonar.ping_cm());
  Serial.println(" cm");
}
