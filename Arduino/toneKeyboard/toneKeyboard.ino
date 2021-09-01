/*
  -setup()
	  https://www.arduino.cc/en/Tutorial/BuiltInExamples/toneMelody
*/

#include "pitches.h"

int melody[] = {
	NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// 4 = 4분음표, 8 = 8분음표:
int noteDurations[] = {
	4, 8, 8, 4, 4, 4, 4, 4
};

void setup() {
    Serial.begin(9600);
	for (int i = 0; i < 8; i++) {
		int noteDuration = 1000 / noteDurations[i];
		tone(8, melody[i], noteDuration);

		delay(noteDuration * 1.30);
		noTone(8);
	}
}

void loop() {
	if (Serial.available() > 0) {

		int inByte = Serial.read();
		switch (inByte) {
			case 'a':
				tone(8, NOTE_C4, 100);
				break;
			case 's':
				tone(8, NOTE_D4, 100);
				break;
			case 'd':
				tone(8, NOTE_E4, 100);
				break;
			case 'f':
				tone(8, NOTE_F4, 100);
				break;
			case 'g':
				tone(8, NOTE_G4, 100);
				break;
			case 'h':
				tone(8, NOTE_A4, 100);
				break;
			case 'j':
				tone(8, NOTE_B4, 100);
				break;
			case 'k':
				tone(8, NOTE_C5, 100);
				break;
			case 'w':
				tone(8, NOTE_CS4, 100);
				break;
			case 'e':
				tone(8, NOTE_DS4, 100);
				break;
			case 't':
				tone(8, NOTE_FS4, 100);
				break;
			case 'y':
				tone(8, NOTE_GS4, 100);
				break;
			case 'u':
				tone(8, NOTE_AS4, 100);
				break;
			default:
				break;
		}
	}
}
