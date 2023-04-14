#define button_1 4
#define button_2 5
#define button_3 6
#define button_4 7
#define nota 3


void setup() {
  pinMode(nota,OUTPUT);
  pinMode(button_1,INPUT);
  pinMode(button_2,INPUT);
}

void loop() {
  if (digitalRead(button_1) == 1){
    tone(nota,140);
    delay(100);
    noTone(nota);
  }
  if (digitalRead(button_2) == 1){
    tone(nota,240);
    delay(100);
    noTone(nota);
  }
  if (digitalRead(button_3) == 1){
    tone(nota,340);
    delay(100);
    noTone(nota);
  }
  if (digitalRead(button_4) == 1){
    tone(nota,440);
    delay(100);
    noTone(nota);
  }
}
