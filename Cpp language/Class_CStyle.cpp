#include <stdio.h>

// * class *
// ���� ���ߵ� C������ main���� �����Ͽ�, ������� �����ϴٰ� main�Լ��� ������ ������ �˴ϴ�.
// �̸� �ΰ�, ���������� ����� �մϴ�. ���α׷��� �����ϱ� ������, ��Ը� ������Ʈ�� �������� �ʴٴ� �ǰ��� �����ϴ�.
// �̿� ����� ������ ��ü������ ����Դϴ�.
// �Ʒ� �ڵ�� ������ ���������� �� ��ü�������� ������ ��� �Դϴ�.
// ��ü���� ����� ���� �ڵ��� ��� ����� �ϳ��� ����(��ü)���� �ν��ϰڴٴ� ���Դϴ�.
// ��ü������ �������⺸�� ������ ���� ���� ��ü�� ��� �������� �ʾƵ� ��ü�� ���ۿ���(API)�� �����ϸ� ������ �� �ִٴ� �Ϳ� �ֽ��ϴ�.
// ����, �о��� �� �� �������ϴ�.
// �ڵ������ struct�� �����Ѵٰ� �Ҷ�,
// �ӵ���� Ư���� �ְ�����, �ӵ��� �����������, ���� �ӵ��� �˷��޶�� ����� ��� �ѵ� ���� �� �������?

typedef struct {
	int speed;
	int (*getSpeed)(void*);
	void (*setSpeed)(void*, int);
}CLASS;

int getSpd(void* my);
void setSpd(void* my, int a);

void main()
{
	CLASS car;
	car.getSpeed = getSpd;
	car.setSpeed = setSpd;

	// �ڵ����� �ӷ��� 50�̶�� �˷��ݴϴ�.
	car.speed = 50;
	printf("Speed : %d\n", car.getSpeed(&car)); // �ڵ�����, ���� �ӵ��� �˷��ٷ�?

	car.setSpeed(&car, 100);	// �ڵ�����, ���� �ӵ��� 100���� ��������~
	printf("Speed : %d\n", car.getSpeed(&car));
}

int getSpd(void* my) {
	return ((CLASS*)my)->speed;
}

void setSpd(void* my, int a) {
	((CLASS*)my)->speed = a;
}