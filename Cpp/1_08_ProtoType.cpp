#include <iostream>
using namespace std;

// * Ŭ������ ������Ÿ�� *
// Ŭ������ ������Ÿ���� ����� �� �ֽ��ϴ�. ������ �Ʒ��� �����ϴ�.
//		class A;	<- ������Ÿ��
//		class B { A a; };
//		class A {};
// 

class A;	// ������Ÿ��
class B {
public: A* a;
	  B(A* aa) { a = aa; }
};
//class B2 { public: A a; };

class A {
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