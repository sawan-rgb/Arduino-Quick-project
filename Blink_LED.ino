int glowpin =13;
void setup() {
  // initialize digital pin glowpin as an output.
  pinMode(glowpin,OUTPUT);
  

}

void loop() {
  //turn the LED on (HIGH is the 5V voltage level)
  digitalWrite(glowpin,HIGH);
  //delay of 500ms
  delay(500);
  // turn the LED on (LOW is the 0V voltage level)
  digitalWrite(glowpin,LOW);
  //delay of 500ms
  delay(500);

}
