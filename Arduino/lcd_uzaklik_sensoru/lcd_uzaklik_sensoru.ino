#include <LiquidCrystal.h>
#define trigpin 7
#define echopin 6
const int lm35_pin = A0;  /* LM35 O/P pin */

int rs = 12, en = 11 , d4 = 5 ,d5 = 4 , d6 = 3 , d7 = 2;
int sure;
int uzaklik;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);


void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  lcd.begin(16,20);

}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  sure = pulseIn(echopin,HIGH,11600);

  uzaklik = sure * 0.0345/2;
  int temp_adc_val;
  float temp_val;
  temp_adc_val = analogRead(lm35_pin);  /* Read Temperature */
  temp_val = (temp_adc_val * 4.88); /* Convert adc value to equivalent voltage */
  temp_val = (temp_val/10); /* LM35 gives output of 10mv/°C */

  delay(250);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Uzaklik :");
  lcd.setCursor(8,0);
  lcd.print(temp_val);
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print(uzaklik);
  lcd.print("cm");
  
  
}
