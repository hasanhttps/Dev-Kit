#include <Keypad.h>

const byte row = 4;
const byte column = 4;

char keypadMatrix[row][column]{
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
}, input;

byte rowPins[row] = {13,12,11,10};
byte columnPins[row] = {9,2,1,0};

Keypad keypadObject = Keypad(makeKeymap(keypadMatrix) , rowPins, columnPins, row, column);

long unsigned int number = 0, count = 0;

void print(int chs){
  
  if ((int)input > 47 && (int)input < 58 && count < 9) {
    number = (number * 10) + ((int)input - 48);
    Serial.print(number);
    Serial.print("\n");
    count++;
  }
  else if (input) Serial.println(input);
}

void ac(int input){
  if (input == 65) {
    number = 0;
    count = 0;
  }
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  input = keypadObject.getKey();
  print(input);
  ac(input);
  Serial.end();
  Serial.begin(9600);
  delay(50);
}
