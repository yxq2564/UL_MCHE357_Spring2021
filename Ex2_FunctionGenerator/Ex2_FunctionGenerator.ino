int aPin = A3;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print(0);  // To freeze the lower limit of y axis
  Serial.print(" ");
  Serial.print(1200);  // To freeze the upper limit of y axis
  Serial.print(" ");
  Serial.println(analogRead(aPin));
}
