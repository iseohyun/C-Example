#include <stdio.h>

// * class *
// Ŭ���� ������ ������ �����ϴ�.
//		class Ŭ������ { 
//			��������; //��� ����
//			�Լ�����; //��� �Լ�
//		};
// 
//		//�Լ�����
//		Ŭ������::�Լ���(){
//			�Լ�����;
//		}
//

class CAR {
public:
	int speed;
	int getSpeed();
	void setSpeed(int);
};

int CAR::getSpeed() {
	return speed;
}

void CAR::setSpeed(int spd) {
	speed = spd;
}

void main()
{
	CAR my;

	// �ڵ����� �ӷ��� 50�̶�� �˷��ݴϴ�.
	my.speed = 90;
	printf("Speed : %d\n", my.getSpeed()); // �ڵ�����, ���� �ӵ��� �˷��ٷ�?

	my.setSpeed(180);	// �ڵ�����, ���� �ӵ��� 100���� ��������~
	printf("Speed : %d\n", my.getSpeed());
}