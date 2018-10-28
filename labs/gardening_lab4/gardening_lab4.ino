// read moisture sensor
#define pump A1
#define sensor A0

int read_window = 30;
int threshold = 650;

int timetowater = 5;
void setup() {
  Serial.begin(9600);     // initialize serial monitor
  Serial.println("Setup Complete, Hello World");
  pinMode(sensor,INPUT);
  pinMode(pump,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cur_reading = analogRead(sensor);
  int sum_avg = 0;
  for(int i=0;i<read_window;i++) {
    cur_reading = analogRead(sensor);
    sum_avg += cur_reading; 
  }
  sum_avg = sum_avg / read_window;
  Serial.println("Reading moisture at " + String(sum_avg));
  if(sum_avg > threshold) {
    Serial.println("watering for " + String(sum_avg));
      analogWrite(pump,1023);
      delay(timetowater * 1000);
      Serial.println("waiting a minute");
      delay(60000); //wait a minute;
  }
  analogWrite(pump,0);
  delay(5000);

}
