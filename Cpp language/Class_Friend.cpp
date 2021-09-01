#include <stdio.h>

// * friend *
// 접근 제어를 예외적으로 무시해야할 경우,
// 기존의 설계를 변경하지 않고, 접근 할 수 있는 키워드가 존재합니다.

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