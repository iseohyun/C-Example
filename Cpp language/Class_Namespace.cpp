#include <iostream>
using namespace std;

// * Name Space *
//  C++에는 각 객체를 구분하기 위해서 다양한 식별자를 가지고 있습니다.
// 하지만, 여러 라이브러리가 추가 될 때 마다, 복잡해지고 충돌 가능성도 올라갑니다.
// 이를 해결하기 위해서 namespace를 사용합니다.
// 
// 일반적으로 네임스페이스는 헤더 파일에서 정의되며, 언제나 새로운 이름을 추가 할 수 있도록 개방되어있습니다.
// C++ 표준 라이브러리 타입과 함수들은 std네임스페이스 또는 그 속에 중첩된 네임스페이스에 선언되어 있습니다.
//		using namespace 네임스페이스이름;	// 사용시
//		using 네임스페이스이름::이름;		// 선언시

class A {
	int ID = 11;
public:
	A() { showID(); }
	A(int a) { ID = a; showID(); }
	A(const A& a) { ID = a.ID; showID(); }
	void showID() { cout << "ID:" << ID << endl; }
};

void main()
{
	A a;
	A b(44);
	A c(b);
}