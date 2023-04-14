#define green 10
#define blue 11
#define red 9

#define red_pot A0
#define green_pot A1
#define blue_pot A2

#define echoPin 5
#define trigPin 6

#define buzzer 7

int sure,mesafe;

void setup(){
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  int red_value = analogRead(red_pot);
  int blue_value = analogRead(blue_pot);
  int green_value = analogRead(green_pot);

  red_value = map(red_value,0,1024, 0,255);
  blue_value = map(blue_value,0,1024, 0,255);
  green_value = map(green_value,0,1024, 0,255);

  analogWrite(red,red_value);
  analogWrite(green,green_value);
  analogWrite(blue,blue_value);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  sure = pulseIn(echoPin,HIGH);
  mesafe = (sure / 2) / 29.1;
  if (mesafe <=5){
    tone(buzzer,450);
    delay(150);
    noTone(buzzer);
    delay(5);
  }
  Serial.println("Mesafe -- ");
  Serial.println(mesafe);
  
}
