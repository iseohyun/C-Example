#include <iostream>
#include "main.h"
using namespace std;

// * template *
// 2�� �̻��� template�� �����ϴ� ����Դϴ�.
// 

namespace eng
{
	void hello() { printf("Hello.\n"); }
}

namespace kor
{
	void hello() { printf("�ȳ��ϼ���.\n"); }
}

class A {
public:
	void B();
	int c;
	using MyType = int;
};
void A::B() { printf("�����Լ��Դϴ�.\n"); }

int main() {
	using namespace eng;
	hello();

	using namespace kor;
	//hello();

	int b;

	using CLASS = A;
	using X_t = typename A::MyType;

	CLASS x;
	x.B();
}

