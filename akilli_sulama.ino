
int sensorPin = 2;
int pumpPin = 4;
int pumpSpeed = 200;
int pumpDuration = 3000;


void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(pumpPin, OUTPUT);
  Serial.begin(9600);
  Serial.println("Sistem baslatildi");
}

void loop() {
  if(digitalRead(sensorPin) == true){
    //toprak kuru, pompayi calistiralim
    analogWrite(pumpPin, pumpSpeed);
    Serial.println("Pompa baslatildi");
    delay(pumpDuration);
    analogWrite(pumpPin, 0);
    Serial.println("Pompa durduruldu");
    delay(360000); //tekrar kontrol etmeden 5 dk bekle
  }else{
    delay(5000);
  }
}
