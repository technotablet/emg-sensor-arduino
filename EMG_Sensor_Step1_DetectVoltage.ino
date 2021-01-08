// Figure out the voltage that the EMG Sensor is Emitting
// Later, use the same to move the motor

int SENSORPIN=A0;
int volts;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  volts = analogRead(SENSORPIN);
  Serial.println(volts);
  delay(250); 
}
