#include <stdio.h>

// * this *
// this�� �ڱ� �ڽ��� �ּҸ� ��ȯ�մϴ�.
// �ּ�ó���� �κ��� �ּ��� �����ϰ�, ��� ����� �޶������� Ȯ���� ���ϴ�.

class A {
public:
	int x = 10;
	void setA(int);
};

void A::setA(int x) {	// ��������(x)�� �������(x)�� �̸��� �����ϴ�.
	//x = x;		// this->�� �����ϰ� �����غ��ϴ�.
	this->x = x;
}

void main()
{
	A a;
	a.setA(25);
	printf("x: %d\n", a.x);
}