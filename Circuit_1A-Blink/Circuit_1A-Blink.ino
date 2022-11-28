/*
  uJPM UNO R3 Board Starter Kit
  Circuit 1A-Blink

  Turns an LED connected to pin 13 on and off. Repeats forever.
*/

void setup() {

  pinMode(13, OUTPUT);      // Set pin 13 to output

}


void loop() {

  digitalWrite(13, HIGH);   // Turn on the LED

  delay(2000);              // Wait for two seconds

  digitalWrite(13, LOW);    // Turn off the LED

  delay(2000);              // Wait for two seconds

}
