#define buzer 8
#define red 9
#define green 10
#define blue 11
#define pot_r A0
#define pot_g A1
#define pot_b A2
#define led 7

int red_d,green_d,blue_d;

void setup() {
  pinMode(buzer,OUTPUT);
  pinMode(led,OUTPUT);
}

void loop() {
  red_d = analogRead(pot_r);
  green_d = analogRead(pot_g);
  blue_d = analogRead(pot_b);
  red_d = map(red_d,0,1024,0,255);
  green_d = map(green_d,0,1024,0,255);
  blue_d = map(blue_d,0,1024,0,255);
  analogWrite(red,red_d);
  analogWrite(green,green_d);
  analogWrite(blue,blue_d);
  if (red_d == 254 or green_d == 254 or blue_d == 254){
    digitalWrite(led,HIGH);
    tone(buzer,440);
    delay(100);
    digitalWrite(led,LOW);
    noTone(buzer);
    delay(100);
  }
  
}
