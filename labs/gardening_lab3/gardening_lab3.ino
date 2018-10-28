#define moisture A0
int read_window = 30;

void setup() {
  Serial.begin(9600);     // initialize serial monitor
  Serial.println("Setup Complete, Hello World");
  pinMode(moisture,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cur_reading = analogRead(moisture);
  Serial.println(cur_reading);
  delay(100);
//  int sum_avg = 0;
//  for(int i=0;i<read_window;i++) {
//    cur_reading = analogRead(moisture);
//    sum_avg += cur_reading; 
//  }
//  sum_avg = sum_avg / read_window;
//  Serial.println(sum_avg);
}
