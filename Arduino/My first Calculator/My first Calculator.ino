#include <Keypad.h>
#include <LiquidCrystal.h>

const byte row = 4;
const byte column = 4;

LiquidCrystal lcd(8 ,7 ,6 ,5 ,4 ,3);

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
    lcd.clear();
    number = (number * 10) + ((int)input - 48);
    lcd.print(number);
    count++;
  }


}

void ac(int input){
  if (input == 65 || number > 100000000) {
    lcd.clear();
    number = 0;
    count = 0;
  }
}

void setup() {
  lcd.begin(16,2);

}

void loop() {
  input = keypadObject.getKey();
  print(input);
  ac(input);
  delay(50);

}
