#define suret_pot A0
#define red_led 8
#define yellow_led 7
#define blue_led 6

int sure;

void setup() {
  pinMode(red_led,OUTPUT);
  pinMode(yellow_led,OUTPUT);
  pinMode(blue_led,OUTPUT);


}

void loop() {
  sure = analogRead(suret_pot);
  sure = map(sure,0,1023,20,1000);
  digitalWrite(red_led,HIGH);
  delay(sure);
  digitalWrite(red_led,LOW);
  digitalWrite(yellow_led,HIGH);
  delay(sure);
  digitalWrite(yellow_led,LOW);
  digitalWrite(blue_led,HIGH);
  delay(sure);
  digitalWrite(blue_led,LOW);

}
