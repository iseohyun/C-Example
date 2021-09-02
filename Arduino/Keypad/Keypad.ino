#include <Keypad.h>

#define ROWS 4
#define COLS 4

//const char kp4x4Keys[ROWS][COLS] = {{'F', 'B', '8', '4'}, {'E', 'A', '7', '3'}, {'D', '0', '6', '2'}, {'C', '9', '5', '1'}};
const char kp4x4Keys[ROWS][COLS] = {{'1', '2', '3', '4'}, {'5', '6', '7', '8'}, {'9', '0', 'A', 'B'}, {'C', 'D', 'E', 'F'}};
byte rowKp4x4Pin [4] = {9, 8, 7, 6};
byte colKp4x4Pin [4] = {5, 4, 3, 2};

Keypad kp4x4 = Keypad(makeKeymap(kp4x4Keys), rowKp4x4Pin, colKp4x4Pin, ROWS, COLS);

void setup() {
	Serial.begin(9600);
	Serial.println(F("Initialize System"));
}
void loop() {
	readKp4x4();
}
void readKp4x4() {
	char customKey = kp4x4.getKey();
	if (customKey) {
		Serial.println(customKey);
	}
}