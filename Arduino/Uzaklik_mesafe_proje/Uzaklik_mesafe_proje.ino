#define echoPin 9
#define trigPin 8
#define led_r 7
#define led_y 6
#define led_b 5

int sure,mesafe;


void setup(){
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(led_r,OUTPUT);
  pinMode(led_y,OUTPUT);
  pinMode(led_b,OUTPUT);

  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  sure = pulseIn(echoPin,HIGH);
  mesafe = (sure / 2) / 29.1;
  if (mesafe <=5){
    digitalWrite(led_r,HIGH);
  }
  else{
    digitalWrite(led_r,LOW);
  }
  if (mesafe <=20 and mesafe >= 5){
    digitalWrite(led_y,HIGH);
  }
  else{
    digitalWrite(led_y,LOW);
  }
  if (mesafe >= 20){
    digitalWrite(led_b,HIGH);
  }
  else{
    digitalWrite(led_b,LOW);
  }
  Serial.println("Mesafe -- ");
  Serial.println(mesafe);
  
  delay(250);
  
}
