#define PIN_LED 7
unsigned int count, toggle;
void setup() {
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    //wait
  }
  Serial.println("시작합니다");
  digitalWrite(PIN_LED, HIGH);
}

void loop() {
  digitalWrite(PIN_LED, LOW);
  delay(1000);
  for(int i = 0; i<5;i++){
    digitalWrite(PIN_LED, HIGH);
    delay(100);
    digitalWrite(PIN_LED,LOW);
    delay(100);
  }
  digitalWrite(PIN_LED,HIGH);
  while(1){
  }
}
