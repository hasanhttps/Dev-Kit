#define suret_pot A0
#define parlaklik_pot A1
#define red_led 9
#define yellow_led 10
#define blue_led 11

int sure,deger;

void setup() {
  pinMode(red_led,OUTPUT);
  pinMode(yellow_led,OUTPUT);
  pinMode(blue_led,OUTPUT);


}

void loop() {
  sure = analogRead(suret_pot);
  sure = map(sure,0,1023,20,400);
  deger = analogRead(parlaklik_pot);
  deger = map(deger,0,1023,0,255);
  
  analogWrite(red_led,deger);
  delay(sure);
  analogWrite(red_led,LOW);
  analogWrite(yellow_led,deger);
  delay(sure);
  analogWrite(yellow_led,LOW);
  analogWrite(blue_led,deger);
  delay(sure);
  analogWrite(blue_led,LOW);

}
