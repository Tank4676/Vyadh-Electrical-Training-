const int potentiometer = A0;
const int led = 5;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potentiometer = analogRead(potentiometer);
  int brightness = 0;

  if (potentiometer <= 511) {
    brightness = map(potentiometer, 0, 511, 0, 255);
  } else {
    brightness = map(potentiometer, 512, 1023, 255, 0);
  }

  analogWrite(led, brightness);
  delay(10);
}