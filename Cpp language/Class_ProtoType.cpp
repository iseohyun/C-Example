#include <iostream>
using namespace std;

// * Ŭ������ ������Ÿ�� *
// Ŭ������ ������Ÿ���� ����� �� �ֽ��ϴ�. ������ �Ʒ��� �����ϴ�.
//		class A;	<- ������Ÿ��
//		class B { A a; };
//		class A {};
// 

class A;	// ������Ÿ��
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