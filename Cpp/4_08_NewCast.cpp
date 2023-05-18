/*
 * new Cast
 *
 *  const_cast : const 한정자를 추가하거나 제거하는데 사용됩니다.
 *
 *  static_cast : 다른 타입으로의 명시적인 변환에 사용됩니다.
 *
 *  dynamic_cast : 상속 계층 구조에서의 다운캐스팅과 가상 함수를 통한 업캐스팅에 사용됩니다.
 *   따라서, upcast의 경우 실행이 되지 않도록 방어할 수 있습니다.
 *   단, cast에 오버해드가 발생하여, 속도가 저하 될 수 있습니다.
 *
 *  reinterpret_cast : 타입간의 포인터나 참조자를 재해석합니다.
 *   안전하지 않을 수 있습니다.
 *   크기와 메모리 레이아웃이 호환 가능한 경우에만 사용합니다.
 *
 */

#include <iostream>
using namespace std;

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
	/* const_cast */
	cout << " >> const cast" << endl;
	int i;
	const int* p = &i;
	int* q = const_cast<int*> (p);
	//int* q = p;	// const int *형식은 int *를 초기화 할 수 없음.
	//*p = 10;		// const는 수정 할 수 없음.
	*q = 10;
	cout << i << endl;


	/* static_cast */
	cout << " >> static cast" << endl;
	cout << static_cast<float>(i) / 3 << endl;

	A* pa = new B(10, 100);	// upcast
	B* pb = static_cast<B*>(pa);		// downcast
	pb->show();
	cout << endl;

	A* pa2 = new A(20);
	B* pb2 = static_cast<B*>(pa2);
	pb2->show();


	/* dynamic_cast */
	cout << " >> dynamic_cast" << endl;
	B* pb3 = new B(10, 100);
	A* pa3 = dynamic_cast<A*>(pa);	// downcast (B->A)
	pb->show();
	cout << endl;

	A* pa4 = new A(20);
	//B* pb2 = dynamic_cast<B*>(pa2); // upcast(A->B), Error
	pb2->show();


	/* reinterpret_cast */
	cout << " >> reinterpret_cast" << endl;
	int intValue = 10;
	double doubleValue;

	// reinterpret_cast를 사용하여 정수를 부동 소수점 숫자로 변환합니다.
	doubleValue = reinterpret_cast<double&>(intValue);

	std::cout << "intValue: " << intValue << std::endl;
	std::cout << "doubleValue: " << doubleValue << std::endl;
}