#define Led 9


void setup() {
  pinMode(Led,OUTPUT);

}

void loop() {

  digitalWrite(Led,HIGH);
  delay(500);
  digitalWrite(Led,LOW);
  delay(250);
}
