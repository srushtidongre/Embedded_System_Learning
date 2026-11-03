void setup() 
{
  pinMode(9, OUTPUT);   // Pin 9 supports PWM
}

void loop() 
{
  // Fade in from 0 to 255
  for (int brightness = 0; brightness <= 255; brightness = brightness + 5) 
  {
    analogWrite(9, brightness); // Send the PWM signal
    delay(30);                  // Wait 30ms so we can see it
  }

  // Fade out from 255 to 0
  for (int brightness = 255; brightness >= 0; brightness = brightness - 5) 
  {
    analogWrite(9, brightness);
    delay(30);
  }
}
