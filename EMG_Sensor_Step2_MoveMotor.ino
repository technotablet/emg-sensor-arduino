// After figuring out a suitable voltage in Step 1
// move the Servo Motor

#include <Servo.h>

int SENSORPIN=A0;
int volts;
int MuscleVoltage = 80;

Servo myservo;  // create servo object to control a servo


void setup() {
  // put your setup code here, to run once:
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  volts = analogRead(SENSORPIN);
  Serial.println(volts);
  
  if (volts >= MuscleVoltage) {
    myservo.write(180);
    Serial.println("Start Motor");
    delay(1000);
  } if (volts < MuscleVoltage) {
    myservo.write(0);
    Serial.println("Stop Motor");
    delay(1000);
  }
  
  delay(250); 
}
