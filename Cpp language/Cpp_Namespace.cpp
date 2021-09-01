#include <iostream>
#include <CppStyle_NameSpaceEx.h>
using namespace std;

// * namespace *
// Namespace는 파일이 같더라도, 또는 다르더라도, 내가 컴파일에 필요한 재료를 선별하는 역할을 합니다.
// Namespace는 해당 역역을 모두 참조 할 수도 있고, 일부만 참조 할 수도 있습니다.
// 

namespace eng
{
	void hello() { printf("Hello.\n"); }
}

namespace kor
{
	void hello() { printf("안녕하세요.\n"); }
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
void A::B() { printf("내부함수입니다.\n"); }


int main() {
	eng::hello();	// namespace를 지정하지 않았다고 사용할 수 없는 것은 아닙니다.

	using namespace eng;	// namespace를 지정하면, 바로 사용할 수 있습니다.
	hello();

	using namespace kor;	// 만약 중첩되는 함수명이 존재하는 namespace를 사용하게 되면, 두 함수 모두 사용할 수 없게 됩니다.
	//hello();

	using NS::func1;		// namespace를 모두 불러와야할 필요성이 없다면, 하나의 함수만 불러오는 것도 방법입니다.
	func1();
	//func2();		// func1만 불러왔습니다. 따라서 func2는 사용할 수 없습니다.

	AAn::AA1();		// 다른 파일에 있는 내용을 가져오는 내용입니다. #include <CppStyle_NameSpaceEx.h> 경로에 주의합니다.
	//AA1();
	using namespace AAn;	// 사용방법은 동일합니다.
	AA1();
}