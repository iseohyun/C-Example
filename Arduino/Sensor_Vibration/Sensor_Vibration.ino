int analogpin = 0; // define analog OUT signal pin
int analog; // define variable to store value read from pin
int digitalpin = 2; // define digital OUT signal pin
int digital; // define variable to store value read from pin

void setup() {
	pinMode(analogpin, INPUT); // set the OUT signal pin as an input
	pinMode(digitalpin, INPUT); // set the OUT signal pin as an input
	Serial.begin(9600); // launch the serial monitor
	Serial.println("Flux Workshop Example");
}
 
void loop() {
	analog = analogRead(analogpin);  // read the voltage level on the A0
	digital = digitalRead(digitalpin);  // read the voltage level on the D2
	Serial.println((String)"Light level: Analog " + analog + " Digital " + digital ); // send the result to the serial monitor
	delay(200); // pause for a moment before repeating
}