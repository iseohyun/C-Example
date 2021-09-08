#define PIN_OUT 7
 
void setup() {
	pinMode(PIN_OUT, OUTPUT);
}
 
void loop() {
	digitalWrite(PIN_OUT, HIGH);
	delay(1000);
	digitalWrite(PIN_OUT, LOW);
	delay(1000);
}
