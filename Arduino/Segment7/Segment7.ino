void printDigit(int input);

byte Pins[] = {9, 8, 3, 4, 5, 7, 6, 2};
byte Digit[] = {
	0xFC, // 0
	0x60, // 1
	0xDA, // 2
	0xF2, // 3
	0x66, // 4
	0xB6, // 5
	0xBE, // 6
	0xE4, // 7
	0xFE, // 8
	0xF6, // 9
};
byte read = 0, tmp;
void (*func)(byte);

void setup(){
	Serial.begin(9600);
	for(int i=0; i<8; i++) {
		pinMode(Pins[i], OUTPUT);
		digitalWrite(Pins[i],HIGH);
	}
	func = mode1;
}

void loop(){
	if(Serial.available() > 0){
		tmp = read;
		read = Serial.read();
		switch(read){
		case 'a': case 'A':
			func = mode1;
			mode1(true);
			read = 0;
			break;
		case 'b': case 'B':
			func = mode2;
			read = 0;
			break;
		case '0': case '1': case '2': case '3': case '4':
		case '5': case '6': case '7': case '8': case '9':
			if(func == mode2) read -= '0';
			else read = tmp;
			break;
		default:
			read = tmp;
		}
	}
	func(read);
}

void mode2(byte digit) {
	printDigit(digit);
	delay(10);
}

void mode1(byte bStart){
	static byte i = 0;
	
	if(bStart) i = 0;
	
	printDigit(i++);
	
	if(i > 9) i = 0;
	
	delay(1000);
}

void printDigit(int input){
	byte mask = 0x80;
	for(int i = 0; mask; i++, mask>>=1){
		if(Digit[input] & mask)
			digitalWrite(Pins[i],LOW);
		else
			digitalWrite(Pins[i],HIGH);
	}
}
