void setup() {
  Serial.begin(9600);     // initialize serial monitor
  Serial.println("Setup Complete, Hello World");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("How are you?");
  delay(1000);            // wait 1000 seconds
}
