/**********************************************************************
* Filename    : Blink
* Description : Make an led blinking.
* Auther      : BLONWINER
* Modification: 2025/02/26
**********************************************************************/
#define LED_BUILTIN7 7

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN7, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
