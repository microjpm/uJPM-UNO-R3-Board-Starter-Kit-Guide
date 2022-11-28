/*
  uJPM UNO R3 Board Starter Kit
  Circuit 1B-Potentiometer

  Changes how fast an LED connected to pin 13 blinks, based on a potentiometer connected to pin A0

*/

int potPosition;       //this variable will hold a value based on the position of the potentiometer

void setup()
{
  Serial.begin(9600);       //start a serial connection with the computer

  pinMode(13, OUTPUT);      //set pin 13 as an output that can be set to HIGH or LOW
}

void loop()
{
  //read the position of the pot
  potPosition = analogRead(A0);    //set potPosition to a number between 0 and 1023 based on how far the knob is turned
  Serial.println(potPosition);     //print the value of potPosition in the serial monitor on the computer

  //change the LED blink speed based on the pot value
  digitalWrite(13, HIGH);           // Turn on the LED
  delay(potPosition);              // delay for as many milliseconds as potPosition (0-1023)

  digitalWrite(13, LOW);            // Turn off the LED
  delay(potPosition);              // delay for as many milliseconds as potPosition (0-1023)
}
