#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
}

void loop()
{
  lcd.setCursor(0,0);
  lcd.write("Hello World");
  lcd.scrollDisplayRight(); // scroll right
  delay(500); 

}
