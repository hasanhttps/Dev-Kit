#define buzzerpin 6
#define trigpin 5
#define echopin 4

int sure;
int uzaklik;
bool isNear = false;

void setup() {
  pinMode(buzzerpin,INPUT);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(5);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);

  sure = pulseIn(echopin,HIGH,11600);

  uzaklik = sure * 0.0345/2;

  if (uzaklik <= 5 && !isNear) {
    tone(buzzerpin, 440);
    isNear = true;
  }
  else if (uzaklik > 5) {
    noTone(buzzerpin);
    isNear = false;
  }
  Serial.println(uzaklik);

  
}
