#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.setCursor(0,0);
}

void loop()
{
  lcd.write("Hello World");
}
