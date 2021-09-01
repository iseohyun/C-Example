#include <stdio.h>

// * Friend Func *
// friend 연산자는 클래스만 등록가능 한 것은 아닙니다.
// 함수도 friend로 등록이 가능합니다.

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