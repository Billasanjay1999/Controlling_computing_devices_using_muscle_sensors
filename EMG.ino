int sensorPin = A0; // the analog pin the muscle sensor is connected to
int sensorValue = 0; // variable to store the sensor value

void setup() {
  Serial.begin(9600); // initialize the serial communication
}

void loop() {
  sensorValue = analogRead(sensorPin); // read the sensor value
  Serial.println(sensorValue); // send the sensor value to the computer
  delay(50); // wait for 50 milliseconds before taking the next reading
}
