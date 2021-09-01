#include <stdio.h>

// * ������ *
// Ŭ������� ������ �̸��� ����Լ��� �����ڶ�� �մϴ�.
// �����ڴ� Ŭ������ ����ʰ� ���ÿ� �ڵ����� ������ �˴ϴ�.
// �����ڵ� �����ε�(Overloading)�� �����մϴ�.

class A {
	int ID = 10;
public:
	A() { showID(); }
	A(int a) { ID = a; showID(); }
	A(const A& a) { ID = a.ID; showID(); }
	void showID() { printf("ID:%d\n", ID); }
};

void main()
{
	A a;
	A b(33);
	A c(b);
}