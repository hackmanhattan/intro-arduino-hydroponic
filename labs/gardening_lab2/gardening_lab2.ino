void setup() {
  Serial.begin(9600);     // initialize serial monitor
  Serial.println("Setup Complete, Hello World");
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN,HIGH);
  delay(1000);            // wait 1000 seconds
  digitalWrite(LED_BUILTIN,LOW);
  delay(1000);
}
