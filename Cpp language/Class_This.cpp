#include <stdio.h>

// * this *
// this는 자기 자신의 주소를 반환합니다.
// 주석처리된 부분의 주석을 삭제하고, 어떻게 결과가 달라지는지 확인해 봅니다.

class A {
public:
	int x = 10;
	void setA(int);
};

void A::setA(int x) {	// 전달인자(x)와 멤버변수(x)가 이름이 같습니다.
	//x = x;		// this->를 삭제하고 실행해봅니다.
	this->x = x;
}

void main()
{
	A a;
	a.setA(25);
	printf("x: %d\n", a.x);
}