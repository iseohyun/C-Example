/*
    * ?????? ??? ????????
  
  PWM?? 5V?? 0V?? ????????? ?????μ?,
  ?? ????? 5V?? ??????? ?????? ???????, ??u?? ?????? ???·??? ??????? ????.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Fade

                    +-\/-+
              PC6  1|    |28  PC5 (AI 5)
        (D 0) PD0  2|    |27  PC4 (AI 4)
        (D 1) PD1  3|    |26  PC3 (AI 3)
        (D 2) PD2  4|    |25  PC2 (AI 2)
   PWM+ (D 3) PD3  5|    |24  PC1 (AI 1)
        (D 4) PD4  6|    |23  PC0 (AI 0)
              VCC  7|    |22  GND
              GND  8|    |21  AREF
              PB6  9|    |20  AVCC
              PB7 10|    |19  PB5 (D 13)
   PWM+ (D 5) PD5 11|    |18  PB4 (D 12)
   PWM+ (D 6) PD6 12|    |17  PB3 (D 11) PWM
        (D 7) PD7 13|    |16  PB2 (D 10) PWM
        (D 8) PB0 14|    |15  PB1 (D 9) PWM
                    +----+
*/
#include <Servo.h>
#define PIN_PWM 9
#define MIN 0
#define MAX 180
#define MODE 0

void UpAndDown();
void OrderBySerial();
void setMode(int mode);

Servo moter;
String readString;
String wBuf;
int theta=0;
int step = 5;
void (*func)() = UpAndDown;

void setup() {
	Serial.begin(9600);
	moter.attach(PIN_PWM, MIN,	MAX);
	moter.writeMicroseconds(20);
	setMode(0);
}

void setMode(int mode) {
	switch(mode) {
		case 1: case -1: case 'a': case 'A':
			func = UpAndDown;
			break;
		case 2: case -2: case 'b': case 'B':
			func = OrderBySerial;
			break;
	}
}

void loop() {
	func();
	delay(20);
}

void UpAndDown() {
	if (Serial.available() > 0) {
		char c = Serial.read();
		setMode(c);
	}
	
	theta += step;
	if(theta > MAX || theta < MIN){
		step = -step;
		theta += step;
	}
	Serial.println(theta);
	moter.write(theta);
}

void OrderBySerial(){
	if (Serial.available() > 0) {
		delay(3);
		char c = Serial.read();
		if((c == '\n')&&(readString.length() > 0)) {
			theta = readString.toInt();
			readString = "";

			if(theta < 0) setMode(theta);

			Serial.println(theta);
			moter.write(theta);
		}else{
			readString += c;
		}
	}
}
