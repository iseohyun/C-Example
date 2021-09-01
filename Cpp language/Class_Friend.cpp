#include <stdio.h>

// * friend *
// ���� ��� ���������� �����ؾ��� ���,
// ������ ���踦 �������� �ʰ�, ���� �� �� �ִ� Ű���尡 �����մϴ�.

class A {
private:	int x;
public:		friend class B;
};

class B {
public:
	void setX(A& a, int x) { a.x = x; }
	void showX(A& a) { printf("%d\n", a.x); }
};

void main()
{
	A a;
	B b;

	b.setX(a, 10);
	b.showX(a);
}