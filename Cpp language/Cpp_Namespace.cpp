#include <iostream>
#include <CppStyle_NameSpaceEx.h>
using namespace std;

// * namespace *
// Namespace�� ������ ������, �Ǵ� �ٸ�����, ���� �����Ͽ� �ʿ��� ��Ḧ �����ϴ� ������ �մϴ�.
// Namespace�� �ش� ������ ��� ���� �� ���� �ְ�, �Ϻθ� ���� �� ���� �ֽ��ϴ�.
// 

namespace eng
{
	void hello() { printf("Hello.\n"); }
}

namespace kor
{
	void hello() { printf("�ȳ��ϼ���.\n"); }
}

namespace NS {
	void func1() {}
	void func2() {}
}

class A {
public:
	void B();
	int c;
	using MyType = int;
};
void A::B() { printf("�����Լ��Դϴ�.\n"); }


int main() {
	eng::hello();	// namespace�� �������� �ʾҴٰ� ����� �� ���� ���� �ƴմϴ�.

	using namespace eng;	// namespace�� �����ϸ�, �ٷ� ����� �� �ֽ��ϴ�.
	hello();

	using namespace kor;	// ���� ��ø�Ǵ� �Լ����� �����ϴ� namespace�� ����ϰ� �Ǹ�, �� �Լ� ��� ����� �� ���� �˴ϴ�.
	//hello();

	using NS::func1;		// namespace�� ��� �ҷ��;��� �ʿ伺�� ���ٸ�, �ϳ��� �Լ��� �ҷ����� �͵� ����Դϴ�.
	func1();
	//func2();		// func1�� �ҷ��Խ��ϴ�. ���� func2�� ����� �� �����ϴ�.

	AAn::AA1();		// �ٸ� ���Ͽ� �ִ� ������ �������� �����Դϴ�. #include <CppStyle_NameSpaceEx.h> ��ο� �����մϴ�.
	//AA1();
	using namespace AAn;	// ������� �����մϴ�.
	AA1();
}