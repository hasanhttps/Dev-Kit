#include "DHT.h"
#include<LiquidCrystal.h>

#define sensorPin A0
#define buzzerPin 9
#define DHTPIN 6
#define DHTTYPE DHT11

LiquidCrystal lcd(8 ,7 ,5 ,4 ,3 ,2);
  
DHT dht(DHTPIN, DHTTYPE);

int esikDegeri = 100;
int data;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  data = analogRead(sensorPin);
  if (data > esikDegeri){
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }
  else{
    digitalWrite(sensorPin, LOW);
  }
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp : ");
  lcd.print(t);
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("Humid : ");
  lcd.print(h);
  lcd.print(" %");
  delay(2000);
}
