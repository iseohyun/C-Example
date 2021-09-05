#include <iostream>
using namespace std;

// * new Cast *
// const_cast : const�� �Ͻ������� ����ȭ��ŵ�ϴ�.
// static_cast : �⺻�� (typecast)�� ����� ������ �մϴ�.
// dynamic_cast : Ȯ�尳���� cast�� ���� ����� ��û�ϰ� �Ǵ� ��찡 �ֽ��ϴ�.(upcast)
//		����, upcast�� ��� ������ ���� �ʵ��� ����� �� �ֽ��ϴ�.
//		��, cast�� �����ص尡 �߻��Ͽ�, �ӵ��� ���� �� �� �ֽ��ϴ�.
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
	//int* q = p;	// const int *������ int *�� �ʱ�ȭ �� �� ����.
	//*p = 10;		// const�� ���� �� �� ����.
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