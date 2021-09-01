#include <iostream>
using namespace std;

// * 클래스의 프로토타입 *
// 클래스의 프로토타입을 사용할 수 있습니다. 문법은 아래와 같습니다.
//		class A;	<- 프로토타입
//		class B { A a; };
//		class A {};
// 

class A;	// 프로토타입
class B { public: A* a; };
class A { public: int ID; };

void main()
{
	A a;
	B b;
	b.a = &a;
	b.a->ID = 99;
	cout << b.a->ID << endl;
}