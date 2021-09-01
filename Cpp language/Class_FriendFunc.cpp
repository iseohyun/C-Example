#include <stdio.h>

// * Friend Func *
// friend �����ڴ� Ŭ������ ��ϰ��� �� ���� �ƴմϴ�.
// �Լ��� friend�� ����� �����մϴ�.

class A {
private:	int x;
public:
	friend void setX(A&, int);
	void showX() {
		printf("%d\n", x);
	}
};

void setX(A& a, int x) {
	a.x = x;
}

void main()
{
	A a;

	setX(a, 15);
	a.showX();
}