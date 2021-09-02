int ANIMDELAY = 100;  // animation delay, deafault value is 100
int INTENSITYMIN = 0; // minimum brightness, valid range [0,15]
int INTENSITYMAX = 8; // maximum brightness, valid range [0,15]

int DIN_PIN = 4;
int CS_PIN  = 2;
int CLK_PIN = 3;

// MAX7219 registers
byte MAXREG_DECODEMODE = 0x09;
byte MAXREG_INTENSITY  = 0x0a;
byte MAXREG_SCANLIMIT  = 0x0b;
byte MAXREG_SHUTDOWN   = 0x0c;
byte MAXREG_DISPTEST   = 0x0f;

const unsigned char heart[] =
{
	B01100110,
	B11111111,
	B11111111,
	B11111111,
	B01111110,
	B00111100,
	B00011000,
	B00000000
};

void setup () {
	pinMode(DIN_PIN, OUTPUT);
	pinMode(CLK_PIN, OUTPUT);
	pinMode(CS_PIN, OUTPUT);

	// initialization of the MAX7219
	setRegistry(MAXREG_SCANLIMIT, 0x07);
	setRegistry(MAXREG_DECODEMODE, 0x00);  // using an led matrix (not digits)
	setRegistry(MAXREG_SHUTDOWN, 0x01);    // not in shutdown mode
	setRegistry(MAXREG_DISPTEST, 0x00);    // no display test
	setRegistry(MAXREG_INTENSITY, 0x0f & INTENSITYMIN);

	// draw hearth
	for(int i = 0; i < 8; i++)
		setRegistry(i+1, heart[i]);
}


void loop () {
	// second beat
	setRegistry(MAXREG_INTENSITY, 0x0f & INTENSITYMAX);
	delay(ANIMDELAY);

	// switch off
	setRegistry(MAXREG_INTENSITY, 0x0f & INTENSITYMIN);
	delay(ANIMDELAY);

	// second beat
	setRegistry(MAXREG_INTENSITY, 0x0f & INTENSITYMAX);
	delay(ANIMDELAY);

	// switch off
	setRegistry(MAXREG_INTENSITY, 0x0f & INTENSITYMIN);
	delay(ANIMDELAY*6);
}


void setRegistry(byte reg, byte value) {
	digitalWrite(CS_PIN, LOW);

	putByte(reg);   // specify register
	putByte(value); // send data

	digitalWrite(CS_PIN, LOW);
	digitalWrite(CS_PIN, HIGH);
}

void putByte(byte data) {
	byte mask=0x80;
	while (mask)
	{
		digitalWrite(CLK_PIN, LOW);
		if (data & mask)
			digitalWrite(DIN_PIN, HIGH);
		else
			digitalWrite(DIN_PIN, LOW);
		digitalWrite(CLK_PIN, HIGH);
		mask >>= 1;
	}
}