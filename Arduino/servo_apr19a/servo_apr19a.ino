#include <Servo.h>
Servo servo;  

void setup() {
  // put your setup code here, to run once:
  servo.attach(4);
  servo.write(0);

  delay(2000);
}

void loop() {
  // for (int i = 0; i < 180; i++){
  //   servo.write(i);
  // }
  // for (int i = 180; i >= 0; i--){
  //   servo.write(i);
  // }
  servo.write(180);
  delay(2000);
  servo.write(0);
  delay(2000);
}
