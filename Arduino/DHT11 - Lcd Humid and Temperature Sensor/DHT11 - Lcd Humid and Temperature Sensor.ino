#include "DHT.h"
#include<LiquidCrystal.h>

#define DHTPIN 6
#define DHTTYPE DHT11

LiquidCrystal lcd(8 ,7 ,5 ,4 ,3 ,2);
  
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  float h = dht.readHumidity();
  // Read temperature as Celsius (the default)
  float t = dht.readTemperature();
  // Read temperature as Fahrenheit (isFahrenheit = true)
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
