#define red 9
#define green 10
#define blue 11

#define red_b 5
#define green_b 6
#define blue_b 7

#define plus_b 3
#define minus_b 4

int red_c = 0,green_c = 0,blue_c = 0,red_d,green_d,blue_d,minus_d,plus_d;

void setup() {
  pinMode(red_b,INPUT);
  pinMode(green_b,INPUT);
  pinMode(blue_b,INPUT);
  pinMode(plus_b,INPUT);
  pinMode(minus_b,INPUT);

}

void loop() {
  red_d = digitalRead(red_b);
  green_d = digitalRead(green_b);
  blue_d = digitalRead(blue_b);
  minus_d = digitalRead(minus_b);
  plus_d = digitalRead(plus_b);
  if (plus_d == 1 and minus_d == 0){
     if (red_d == 1){
      red_c++;
     }
     if (green_d == 1){
      green_c++;
     }
     if (blue_d == 1){
      blue_c++;
     }
  }
  else if (plus_d == 0 and minus_d == 1){
    if (red_d == 1){
      red_c--;
     }
     if (green_d == 1){
      green_c--;
     }
     if (blue_d == 1){
      blue_c--;
     }
  }
  analogWrite(red,red_c);
  analogWrite(green,green_c);
  analogWrite(blue,blue_c);
  
}
