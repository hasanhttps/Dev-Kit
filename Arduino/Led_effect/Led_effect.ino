int list[] = {2,3,4,5,6,7};

void setup() {

  for (int i = 0;i<6;i++){
    pinMode(list[i],OUTPUT);
  }

}

void loop() {
  for(int i = 0;i < 6;i++){
    digitalWrite(list[i],HIGH);
    delay(50);
    digitalWrite(list[i],LOW);
  }
  for(int j = 6; j > 0;j--){
    digitalWrite(list[j],HIGH);
    delay(50);
    digitalWrite(list[j],LOW);
  }
}
