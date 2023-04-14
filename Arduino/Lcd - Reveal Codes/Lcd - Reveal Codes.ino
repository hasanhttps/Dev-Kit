#include <LiquidCrystal.h>
#define echoPin 2
#define trigPin 1
#define buzzer 9
const int lm35_pin = A0;

LiquidCrystal lcd(8 ,7 ,6 ,5 ,4 ,3);

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0, 0);
  lcd.println("Hello World");

}

void loop() {
  // put your main code here, to run repeatedly:

}
