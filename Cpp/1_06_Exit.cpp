#include <stdio.h>

// * 소멸자 *
// 소멸자는 클래스가 소멸될 때 자동으로 호출됩니다.
// 로그나 메모리해제 등 소홀할 수 있는 작업을 수행할 수 있습니다.
// 문법은 아래와 같습니다 :
//		~클래스명()
//		클래스명::클래스명() { 내용; }
//

class A {
public:
	int ID;
	A(int init) { ID = init; }
	~A() { printf("%d 소멸\n", ID); }
};

int main()
{
	A a10(10);
	{
		A a20(20);
		{
			A a30(30);
		}
	}
}