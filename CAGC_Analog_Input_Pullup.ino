/*
 for CAGC class, attaching bend sensot to ground and #6. 
 #6 is also A7 according to FLORA pin diagram. 
 Based on this code: 

 http://www.arduino.cc/en/Tutorial/AnalogInput

 */

int sensorPin = A7;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  pinMode(sensorPin, INPUT_PULLUP); //activates internal resistor
  Serial.begin(9600); //make sure serial monitor baud rate set to this value, starts serial communication. 
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin); //reads sensorpin
  Serial.println(sensorValue); //prints out sensor value in serial monitor
  delay(200);
}
