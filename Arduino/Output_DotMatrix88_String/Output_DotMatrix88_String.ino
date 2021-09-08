#include "LedControlMS.h"

#define DATA_IN 4
#define CLK		3
#define	CS		2
#define NBR_MTX 1 //number of matrices

LedControl lc=LedControl(DATA_IN, CLK, CS, NBR_MTX);
String str="Serial Input is Ready!";
String inputStr;

void setup() {
	Serial.begin(9600);
	
	for (int i=0; i< NBR_MTX; i++)
	{
		lc.shutdown(i,false);

		/* Set the brightness to a medium values */
		lc.setIntensity(i,8);

		/* and clear the display */
		lc.clearDisplay(i);

		delay(100);
	}
}

void loop() {
	if(Serial.available() > 0) {
		char c = Serial.read();
		if((c == '\n')&&(str.length() > 0)) {
			str = inputStr;
			lc.clearAll();
			inputStr = "";
		}else{
			inputStr += c;
		}
	}else{
		Serial.println(str);
		lc.writeString(0, str.begin());
		delay(1000);
	}
}