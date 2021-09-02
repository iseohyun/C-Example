/*
  Pull-up

  Ǯ���̶� �����ϱ��? ���⸦ �־����� ������ �⺻������ 0V�Դϴ�.

  �̷��� ���� �˾ƾ� �մϴ�. ������ ����� 5V�� ��õ(Charge)�� �� �� �Ŀ�,
  0V(GND)�� ��Ʈ(short; ����=�ܶ�=�ռ�)�� �Ǿ��� �� ������ �Ǹ鼭 0V�� �˴ϴ�.
  �츮�� �̷��� ������ ������ �а� �ִ� ���Դϴ�.

  ������ �ռ��̶�� �̾߱⸦ �ߴµ�, 5V�� �ܼ��ϰ� �����ϴ� ���� ������ �����մϴ�.
  ������ ���� ������ �ߴٰ��� �帣�� ������ �ʹ� �������鼭 ���İ��� ������ �ȵǴ� �µ����� �ö� �� �� �ְ�,
  �ٸ� ��ǰ�� �쿩�����⵵ �մϴ�. �׷��� ������ ���� �������� �����־�� �մϴ�.

  Ǯ����, �⺻���� ��� ������ 5V�� �������ν�, ������ �Ͼ�� �ʴ��̻� 5V�� �ǵ��� �����ݴϴ�.

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
