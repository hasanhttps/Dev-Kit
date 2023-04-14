#include<Servo.h>

Servo flop;

int valueJoy ;

void setup() {
  flop.attach(6);

}

void loop() {
  valueJoy = analogRead(A1);
  valueJoy = map(valueJoy, 0, 1023, 0, 180);
  flop.write(valueJoy);
}
