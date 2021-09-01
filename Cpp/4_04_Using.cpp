#include <iostream>
using namespace std;

// * using *
// using은 typedef와 같은 역할을 합니다. namespace와 연계하여 좀 더 포괄적으로 쓰입니다.
// 문법은 다음과 같습니다.
//		using 새로운 타입명 = 기존의 타입명;
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