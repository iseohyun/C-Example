#include <iostream>
using namespace std;

// * 클래스의 프로토타입 *
// 클래스의 프로토타입을 사용할 수 있습니다. 문법은 아래와 같습니다.
//		class A;	<- 프로토타입
//		class B { A a; };
//		class A {};
// 주의 : 클래스 안에서는 프로토 타입으로 사용할 수 있지만, main함수보다는 위에 있어야 합니다.

class A; // 프로토타입
class B
{
public:
    A *a;
    B(A *aa) { a = aa; }
};
// class B2 { public: A a; };

class A
{
public:
    int ID = 0;
    B b = B(this);
};

int main()
{
    A a;
    B b(&a);

    b.a->ID = 99;
    cout << a.ID << endl;

    a.b.a->b.a->b.a->b.a->b.a->b.a->b.a->b.a->b.a->b.a->ID = 55;
    cout << a.ID << endl;
}