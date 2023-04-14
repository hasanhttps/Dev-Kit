#define echoPin 6
#define trigPin 7

int sure,mesafe;


void setup(){
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);

  Serial.begin(9600);
}

void loop(){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  sure = pulseIn(echoPin,HIGH);
  mesafe = (sure / 2) / 29.1;

  Serial.println("Mesafe -- ");
  Serial.println(mesafe);
  

  
}
