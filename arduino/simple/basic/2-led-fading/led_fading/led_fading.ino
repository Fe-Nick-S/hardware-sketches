
#define LED 13
#define TIMEOUT 50

int brightness = 0;
int fadeStep = 5;


void setup() {
  pinMode(LED, OUTPUT);
}


void loop() {
  analogWrite(LED, brightness);
  
  brightness += fadeStep;
  if (brightness <= 0 || brightness >= 255) {
    fadeStep = -fadeStep;
  }
  
  delay(TIMEOUT);
}

