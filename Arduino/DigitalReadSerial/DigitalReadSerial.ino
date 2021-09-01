/*
    * 버튼 예제
    
    https://www.arduino.cc/en/Tutorial/BuiltInExamples/DigitalReadSerial

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

#define PIN_BTN 2

void setup() {
    Serial.begin(9600);
    pinMode(PIN_BTN, INPUT);
}

void loop() {
    int buttonState = digitalRead(PIN_BTN);
    Serial.println(buttonState);
    delay(1);
}
