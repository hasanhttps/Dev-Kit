#define Led 9
#define Pot A5

void setup() {
   Serial.begin(9600);
    
}

void loop(){
  int deger = analogRead(Pot);
  deger = deger / 4;
  analogWrite(Led,deger);
  Serial.println(deger);
}
