void setup() {
  pinMode(7, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  int buttonState = digitalRead(2);
  
  if (buttonState == LOW) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
}
