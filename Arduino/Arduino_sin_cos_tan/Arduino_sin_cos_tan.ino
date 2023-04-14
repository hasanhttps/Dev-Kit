#include <LiquidCrystal.h>

#define echoPin 10
#define trigPin 11
#define ok_button 2
#define r_button 9
#define number_pot A0
#define led 12

int number, ok, ac, s = 30, x, count = 0, sure, mesafe;

LiquidCrystal lcd(8, 7, 6, 5, 4, 3);


void setup() {
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(ok_button, INPUT);
  pinMode(r_button, INPUT);
  pinMode(led, OUTPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  number = analogRead(number_pot);
  ok = digitalRead(ok_button);
  ac = digitalRead(r_button);
  Serial.print(number);
  Serial.print("\n");
  delay(s);
  if (count == 0) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(number);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(trigPin, LOW);
    sure = pulseIn(echoPin, HIGH);
    mesafe = (sure / 2) / 29.1;
    if (mesafe <= 25){
      digitalWrite(led,HIGH);
    }
    else{
      digitalWrite(led,LOW);
    }
    lcd.setCursor(11, 0);
    lcd.print(mesafe);
    lcd.print("cm");
  }
  delay(s);
  if (ok == 1) {
    ok = 0;
    count = 1;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("sin(");
    lcd.print(number);
    lcd.print(")");
    lcd.setCursor(0, 1);
    lcd.print(sin(number));
  }

  if (ac == 1) {
    count = 0;
  }
}