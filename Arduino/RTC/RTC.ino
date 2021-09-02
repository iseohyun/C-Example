#include <DS1302.h>

#define SCK_PIN 4
#define IO_PIN 3
#define RST_PIN 2

DS1302 rtc(RST_PIN, IO_PIN, SCK_PIN);

void setup()
{
	rtc.halt(false);
	rtc.writeProtect(false);

	Serial.begin(9600);
/*
	rtc.setDOW(THURSDAY);
	rtc.setTime(8, 43, 0);
	rtc.setDate(2, 9, 2021); /**/
}
 
void loop()
{
	Serial.print("It is ");
	Serial.print(rtc.getDOWStr());
	Serial.print(" / ");
	Serial.print(rtc.getDateStr());
	Serial.print(" / ");
	Serial.println(rtc.getTimeStr());

	/* Wait before reading again */
	delay (1000);
}
