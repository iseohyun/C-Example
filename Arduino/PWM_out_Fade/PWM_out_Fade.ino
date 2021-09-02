/*
    * ������ ��� ��ȭ��Ű��
  
  PWM�� 5V�� 0V�� �����ư��鼭 ����ϴµ�,
  �� ���̰� 5V�� �����ϴ� ������ �����ϸ鼭, ��ü�� ���޵Ǵ� ���·��� �����ϰ� �˴ϴ�.

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

#define PIN_PWM 9

int brightness = 0;    // how bright the PIN_PWM is
int step = 5;

void setup() {
  pinMode(PIN_PWM, OUTPUT);
}

void loop() {
  analogWrite(PIN_PWM, brightness);
  
  brightness += step;

  if ((brightness >= 255)|| (brightness <= 0)) {
      step = -step;
  }
  
  delay(10);    // 30 milliseconds
}
