
const int red = 13;
const int yellow = 12;
const int green = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // get set go 
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(5000); 

  // wait 
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
  delay(2000); 

  // stop
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(5000);
}