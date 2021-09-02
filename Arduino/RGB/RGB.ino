#define PIN_RED		11
#define PIN_GREEN	10
#define PIN_BLUE	9

void mode1();
void mode2();
void mode3();
void setMode(char);

byte R = 255, G = 0, B = 0, k = 0, mod = 0;
void (*func)();
void setup() {
	Serial.begin(9600);
	pinMode(PIN_RED, OUTPUT);
	pinMode(PIN_GREEN, OUTPUT);
	pinMode(PIN_BLUE, OUTPUT);
	func = mode2;
}

void loop() {
	func();
	if (Serial.available() > 0) {
		delay(3);
		char c = Serial.read();
		setMode(c);
	}
}

void setMode(char mode) {
	Serial.write(mode);
	switch(mode) {
		case 'a': case 'A': case'1':
			func = mode1;
			break;
		case 'b': case 'B': case'2':
			func = mode2;
			R = 255; G = 0; B = 0;
			break;
		case 'c': case 'C': case'3':
			func = mode3;
			break;
		case '\r': case '\n':
			break;
		default:
			func = mode2;
	}
}

void mode1() {
	if(++k==100) {
		mod++;
		k = 0;
	}
	switch(mod) {
	case 0:	RGB_color(255, 0, 0); /*Red*/ break;
	case 1:	RGB_color(0, 255, 0); /*Green*/ break;
	case 2: RGB_color(0, 0, 255); /*Blue*/ break;
	case 3: RGB_color(255, 255, 125); /*Raspberry*/ break;
	case 4: RGB_color(0, 255, 255); /*Cyan*/ break;
	case 5: RGB_color(255, 0, 255); /*Magenta*/ break;
	case 6: RGB_color(255, 255, 0); /*Yellow*/ break;
	case 7: RGB_color(255, 255, 255); /*White*/ break;
	default: mod = 0;
	}
	delay(10);
}

void mode2() {
	RGB_color(R,G,B);
	if(++k==0) {
		mod++;
		delay(500);
	}
	switch(mod){
	case 0: G = k; break; // R,G = Yellow
	case 1: R = 255-k; break; // G
	case 2: B = k; break; // G,B = Cyan
	case 3: G = 255-k; break; // B
	case 4: R = k; break; // R,B = Magenta
	case 5: G = k; break; // R,G,B = White
	case 6: G = B = 255-k; break;
	default: mod = 0;
	}
	delay(2);
}

void mode3() {
	RGB_color(255, 0, 0); // Red
	delay(1000);
	RGB_color(0, 255, 0); // Green
	delay(1000);
	RGB_color(0, 0, 255); // Blue
	delay(1000);
	RGB_color(255, 255, 125); // Raspberry
	delay(1000);
	RGB_color(0, 255, 255); // Cyan
	delay(1000);
	RGB_color(255, 0, 255); // Magenta
	delay(1000);
	RGB_color(255, 255, 0); // Yellow
	delay(1000);
	RGB_color(255, 255, 255); // White
	delay(1000);
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value) {
	analogWrite(PIN_RED, red_light_value);
	analogWrite(PIN_GREEN, green_light_value);
	analogWrite(PIN_BLUE, blue_light_value);
}
