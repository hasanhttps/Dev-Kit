#include <MFRC522.h>
#include <Servo.h>
#include <SPI.h>
#define rstPin 9
#define ssPin 10
#define ServoPin 6

Servo servo;
MFRC522 rfid(ssPin, rstPin);

byte id[4] = {141,237,164,137};
byte smallId[4] = {163,219,133,48};

unsigned int azn = 10000;

void setup() {
  servo.attach(8);
  Serial.begin(9600);
  SPI.begin();
  rfid.PCD_Init();
}

void writeScreen(){
  for(int i = 0; i < 4; i++){
    Serial.print("Id number : ");
    Serial.println(rfid.uid.uidByte[i]);
  }
  
}

void loop() {
  bool isCheck = true;
  if(! rfid.PICC_IsNewCardPresent()) return;
  if (! rfid.PICC_ReadCardSerial()) return;
  for (int i = 0; i < 4; i++) 
  if (rfid.uid.uidByte[i] != id[i]) {
    isCheck = false;
    azn -= 100;
  }
  if (isCheck){
    Serial.println("The door is unlocked ;");
    writeScreen();
    servo.write(0);
    delay(3000);
    servo.write(90);
    delay(1000);
  }
  else{
    Serial.println("Acsess denied ;");
    writeScreen();
  }
  rfid.PICC_HaltA();
}
