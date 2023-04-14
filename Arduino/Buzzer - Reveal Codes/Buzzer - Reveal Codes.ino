void setup() {
  pinMode(8,OUTPUT);
}

void loop() {
  tone(8,440);
  delay(100);
  noTone(8);
  delay(100);
}
