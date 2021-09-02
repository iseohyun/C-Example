/*
  Dimmer

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Dimmer
*/

#define PIN_LED 9      // the pin that the LED is attached to

void setup() {
	Serial.begin(9600);
	pinMode(PIN_LED, OUTPUT);
}

void loop() {
	byte brightness = analogRead(A0);
	Serial.println(String(brightness));
	analogWrite(PIN_LED, brightness);
	delay(10);
}
