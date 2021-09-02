/*
  Pull-up

  풀업이란 무엇일까요? 전기를 넣어주지 않으면 기본적으로 0V입니다.

  이론을 조금 알아야 합니다. 기존의 방법은 5V를 충천(Charge)를 해 준 후에,
  0V(GND)와 쇼트(short; 접촉=단락=합선)이 되었을 때 방전이 되면서 0V가 됩니다.
  우리는 이러한 전선의 전압을 읽고 있는 것입니다.

  위에서 합선이라는 이야기를 했는데, 5V라도 단순하게 접촉하는 것은 굉장히 위험합니다.
  저항이 없이 연결을 했다가는 흐르는 전류가 너무 많아지면서 순식간에 감당이 안되는 온도까지 올라 갈 수 있고,
  다른 부품을 녹여버리기도 합니다. 그래서 적당히 높은 전압으로 막아주어야 합니다.

  풀업은, 기본적인 출력 전압을 5V로 해줌으로써, 접촉이 일어나지 않는이상 5V가 되도록 도와줍니다.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/InputPullupSerial

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

#define PIN_INPUT 3
#define PIN_LED 13

void setup() {
    Serial.begin(9600);

    pinMode(PIN_INPUT, INPUT_PULLUP); //INPUT
    pinMode(PIN_LED, OUTPUT);
}

void loop() {
    int sensorVal = digitalRead(PIN_INPUT);
    Serial.println(sensorVal);

    if (sensorVal == HIGH) {
        digitalWrite(PIN_LED, LOW);
    } else {
        digitalWrite(PIN_LED, HIGH);
    }
}
