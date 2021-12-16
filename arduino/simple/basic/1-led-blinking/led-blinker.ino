
#define LED 13
#define TIMEOUT 1000


void setup() {
  pinMode(LED, OUTPUT);
}


void loop() {
  digitalWrite(LED, HIGH);
  delay(TIMEOUT);
  digitalWrite(LED, LOW);
  delay(TIMEOUT);
}
