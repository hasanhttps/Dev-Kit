#include <LiquidCrystal.h>
#define echoPin 2
#define trigPin 1
#define buzzer 9
const int lm35_pin = A0;

LiquidCrystal lcd(8 ,7 ,6 ,5 ,4 ,3);

void setup() {
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(buzzer,OUTPUT);
  lcd.begin(16,2);
  
}

void loop() {
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  int sure = pulseIn(echoPin,HIGH);
  int mesafe = (sure / 2) / 29.1;
  int temp_adc_val;
  float temp_val;
  temp_adc_val = analogRead(lm35_pin);  /* Read Temperature */
  temp_val = (temp_adc_val * 4.88); /* Convert adc value to equivalent voltage */
  temp_val = (temp_val/10); /* LM35 gives output of 10mv/°C */
  delay(200);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Uzaklik :");
  lcd.setCursor(11,0);
  lcd.print(int(temp_val));
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print(mesafe);
  lcd.print("cm");
  if (temp_val >= 26){
    tone(buzzer,440);
    delay(50);
    noTone(buzzer);
    delay(50);
  }
}
