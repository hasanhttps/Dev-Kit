#include<LiquidCrystal.h>


LiquidCrystal lcd(8 ,7 ,5 ,4 ,3 ,2);

void setup() {
  lcd.begin(16,2);
  Serial.begin(9600);
  lcd.print("Hello World");
}

void loop() {
  

}
