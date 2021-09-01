#include <iostream>
#include "main.h"
using namespace std;

// * template *
// 2개 이상의 template를 지정하는 방법입니다.
// 

namespace eng
{
	void hello() { printf("Hello.\n"); }
}

namespace kor
{
	void hello() { printf("안녕하세요.\n"); }
}

class A {
public:
	void B();
	int c;
	using MyType = int;
};
void A::B() { printf("내부함수입니다.\n"); }

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

