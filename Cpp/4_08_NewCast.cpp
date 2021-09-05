#include <iostream>
using namespace std;

// * new Cast *
// const_cast : const를 일시적으로 무력화시킵니다.
// static_cast : 기본의 (typecast)와 비슷한 역할을 합니다.
// dynamic_cast : 확장개념의 cast는 없는 기능을 요청하게 되는 경우가 있습니다.(upcast)
//		따라서, upcast의 경우 실행이 되지 않도록 방어할 수 있습니다.
//		단, cast에 오버해드가 발생하여, 속도가 저하 될 수 있습니다.
//-> const_cast, static_cast, dynamic_cast, reinterpret_cast

class A {
	int IDa;
public:
	A(int a) : IDa(a) {}
	void show() { cout << IDa << endl; }
};
class B : public A {
	int IDb;
public:
	B(int a, int b) : A(a), IDb(b) {}
	void show() { cout << IDb << endl; }
};

int main()
{
	// const_cast
	cout << " >> const cast" << endl;
	int i;
	const int* p = &i;
	int* q = const_cast<int*> (p);
	//int* q = p;	// const int *형식은 int *를 초기화 할 수 없음.
	//*p = 10;		// const는 수정 할 수 없음.
	*q = 10;
	cout << i << endl;

	// static_cast
	cout << " >> static cast" << endl;
	cout << static_cast<float>(i) / 3 << endl;

	A* pa = new B(10, 100);	// upcast
	B* pb = static_cast<B*>(pa);		// downcast
	pb->show();
	cout << endl;

	A* pa2 = new A(20);
	B* pb2 = static_cast<B*>(pa2);
	pb2->show();

	// dynamic_cast
	B* pb3 = new B(10, 100);
	A* pa3 = dynamic_cast<A*>(pa);	// downcast (B->A)
	pb->show();
	cout << endl;

	A* pa4 = new A(20);
	//B* pb2 = dynamic_cast<B*>(pa2); // upcast(A->B), Error
	pb2->show();
}