#define Led 10


void setup() {
  pinMode(Led,OUTPUT);
}

void loop() {
  int isik = analogRead(A1);
  if (isik >= 200){
    digitalWrite(Led,LOW);
  }
  if (isik < 200){
    digitalWrite(Led,HIGH);
  }
}
