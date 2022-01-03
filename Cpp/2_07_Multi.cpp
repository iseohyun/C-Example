#include <iostream>
using namespace std;

// * 다중상속 *
// 다중 상속은 한번에 여러개의 상속을 받는 것을 말합니다.
// 다중 상속은 아래와 같은 문법으로 가능합니다.
//		class 클래스명 : 접근지시자 부모클래스, 부모클래스, [접근지시자 부모클래스]
// 다중 상속의 문제점은 상속받은 두 클래스의 부모에 같은 이름의 멤버가 존재하면
// 충돌(모호함)을 일으킨다는 것입니다.
// 심지어 아래 예시와 같이 같은 클래스가 두 번 상속을 받는 경우도 발 생할 수 있습니다.
// 따라서 추천하는 코딩 방식은 아닙니다.
// 덧, 자바에서는 다중상속을 원천적으로 금지하고 있습니다.

class A { public:	void showA() { cout << "Class A\n"; } };
class B : public A { public:	void showB() { cout << "Class B\n"; } };
class C : public B {};

class D : public A {};
class E : public C, D {};	// 다중 상속

int main()
{
	E e;
	//e.showA();
	e.showB();
}