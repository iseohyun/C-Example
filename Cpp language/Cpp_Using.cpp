#include <iostream>
using namespace std;

// * using *
// using�� typedef�� ���� ������ �մϴ�. namespace�� �����Ͽ� �� �� ���������� ���Դϴ�.
// ������ ������ �����ϴ�.
//		using ���ο� Ÿ�Ը� = ������ Ÿ�Ը�;
//

class A {
public:
	int i;
	using MyType = int;
};

int main() {
	using U8 = char;
	U8 c1 = 3;

	using C = A;
	C X;
	X.i = 4;

	using X_t = typename C::MyType;
	X_t s32;
	s32 = 5;

	printf("%d %d %d\n", c1, X.i, s32);
}