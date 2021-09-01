/*
	1초 간격으로 LED가 켜졌다가 꺼졌다가 하는 예제

	GND > LED > 330(주주갈) > PIN13

	https://www.arduino.cc/en/Main/Products
	https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink

	C:\Program Files (x86)\Arduino\hardware\arduino\avr\variants\standard\pins_arduino.h
	// PIN13 > PB5 > LED_BUILTIN(=13) > PIN_BNK

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

#define PIN_BNK 1
//#define PIN_BNK LED_BUILTIN

void setup() {
  pinMode(PIN_BNK, OUTPUT);
}

void loop() {
  digitalWrite(PIN_BNK, HIGH);
  delay(1000);
  digitalWrite(PIN_BNK, LOW);
  delay(1000);
}
