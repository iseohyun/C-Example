#include <stdio.h>

// * 생성자 *
// 클래스명과 동일한 이름의 멤버함수를 생성자라고 합니다.
// 생성자는 클래스가 선언됨과 동시에 자동으로 실행이 됩니다.
// 생성자도 오버로딩(Overloading)이 가능합니다.

class A {
	int ID = 10;
public:
	A() { showID(); }
	A(int a) { ID = a; showID(); }
	A(const A& a) { ID = a.ID; showID(); }
	void showID() { printf("ID:%d\n", ID); }
};

void main()
{
	A a;
	A b(33);
	A c(b);
}