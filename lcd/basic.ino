/*
**connections**
  - LCD RS pin to digital pin 12
  - LCD Enable pin to digital pin 11
  - LCD D4 pin to digital pin 5
  - LCD D5 pin to digital pin 4
  - LCD D6 pin to digital pin 3
  - LCD D7 pin to digital pin 2
  - LCD R/W pin to ground
  - LCD VSS pin to ground
  - LCD VCC pin to 5V
  - 10K resistor:
  - ends to +5V and ground
  - wiper to LCD VO pin (pin 3)
*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.write("Hello World");
}
