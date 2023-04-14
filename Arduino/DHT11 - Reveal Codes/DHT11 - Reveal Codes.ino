#include <DHT.h>
#define dhtPin 6

#define DHTTYPE DHT11

DHT dht(dhtPin, DHTTYPE);

void setup() {
  Serial.begin(9600);

}

void loop() {
  delay(2000);
  float temp = dht.readTemperature();
  Serial.print("Temperature : ");
  Serial.println(temp);
}
