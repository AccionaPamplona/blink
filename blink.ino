/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
<<<<<<< HEAD
  Example
=======
 asdf
>>>>>>> 8f7bc606c5225cedbdd9cf717c5e1c0803cde6b7
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(3000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1985);               // wait for a second
}
