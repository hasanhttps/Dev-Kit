#define red_led 8
#define yellow_led 7
#define blue_led 6

void setup() {
  pinMode(red_led,OUTPUT);
  pinMode(yellow_led,OUTPUT);
  pinMode(blue_led,OUTPUT);
}

void loop() {
  digitalWrite(red_led,HIGH);
  delay(250);
  digitalWrite(red_led,LOW);
  digitalWrite(yellow_led,HIGH);
  delay(250);
  digitalWrite(yellow_led,LOW);
  digitalWrite(blue_led,HIGH);
  delay(250);
  digitalWrite(blue_led,LOW);

}
