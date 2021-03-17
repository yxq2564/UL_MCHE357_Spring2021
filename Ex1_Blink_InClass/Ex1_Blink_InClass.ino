int Ledpin = 13;
int ButtonPin = 5;
int buttonstate2 = 0;
int aPin = A3;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
//  pinMode(13, OUTPUT);
  pinMode(Ledpin, OUTPUT);
  pinMode(ButtonPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Ledpin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(Ledpin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  int buttonstate = digitalRead(ButtonPin);
  buttonstate2 = digitalRead(ButtonPin);
  int analogval = analogRead(A3);
}
