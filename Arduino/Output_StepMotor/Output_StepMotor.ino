#include <Stepper.h>

const int stepsPerRevolution = 32;

Stepper stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
	stepper.setSpeed(220);
}

void loop() {
	int sensorReading = analogRead(A2);
	if (sensorReading < 412) {
		stepper.step(1);
	}else if(sensorReading > 612){  
		stepper.step(-1);
	}
	
	stepper.setSpeed(abs(512-sensorReading));
}
