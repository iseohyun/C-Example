#include <Joystick.h>
#include <AxisJoystick.h>

#include <Servo.h>

#define PIN_PWM 9
#define MIN 0
#define MAX 180

#define SW_PIN 5
#define VRX_PIN A1
#define VRY_PIN A2

Joystick* joystic;
Servo moter;
int theta;

void setup() {
	Serial.begin(9600);

	joystic = new AxisJoystick(SW_PIN, VRX_PIN, VRY_PIN);
	
	moter.attach(PIN_PWM, MIN,	MAX);
	moter.writeMicroseconds(20);
}

void loop() {
	Serial.print(joystic->readVRx());
	theta = joystic->readVRx()/(1024/180);
	Serial.println(" | " + String(theta));
	moter.write(theta);
	delay(10);
}

