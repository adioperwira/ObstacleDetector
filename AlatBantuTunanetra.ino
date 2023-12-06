const int TrigPin = 2;
const int EchoPin = 3;
const int Buzzer = 4;

float fungsiJarak() {
  
  digitalWrite(TrigPin, HIGH);              
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);

  long durasi = pulseIn(EchoPin, HIGH);     
  float jarak = durasi * 0.034 / 2;
  return jarak;
}

void setup() {

  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  pinMode(Buzzer, OUTPUT);     

}

void loop() {

float jarak = fungsiJarak();

if(jarak <= 30){
  tone(Buzzer, 1000);
  }
else{
  noTone(Buzzer);
  }
}
