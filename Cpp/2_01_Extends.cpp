#include <iostream>
using namespace std;

// * 상속 *
// 부모로 부터 상속받은 기능을 그대로 사용할 수 있습니다.
// 이는 객체라는 개념적으로도 훌륭하지만, 코드를 재사용 할 수 있다는데 아주 큰 장점이 있습니다.
// 문법은 다음과 같습니다.
//		class 자식클래스 : 접근제어자 부모클래스 { }

class Parents {
public:
	string str = "Parents^.^)/";
};

class Children : public Parents {
public:
	string str2 = "Children^_^)a";
};

void main()
{
	Children chi01;

	cout << chi01.str << " " << chi01.str2 << endl;
}