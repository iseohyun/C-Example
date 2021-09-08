int PIN_IN = 8;
int PIN_OUT = 13;

byte input;

void setup() {
	
	Serial.begin(9600);
	pinMode(PIN_IN, INPUT);
	pinMode(PIN_OUT, OUTPUT);
	
	Serial.println("Start");
}
 
void loop() {
	
	if(digitalRead(PIN_IN)) {
		Serial.println("ON");
		digitalWrite(PIN_OUT, HIGH);
	}else{
		Serial.print("*");
		digitalWrite(PIN_OUT, LOW);
	}
	delay(200);
}