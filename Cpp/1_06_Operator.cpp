using namespace std;
#include <iostream>
#include <string>

// * 연산자 오버로딩 *
// 연산자 오버로딩은 연산자를 재정의 하는 작업을 합니다.
// 객체구조에서 추상화 된 객체에게 관습적으로 요구되는 연산을 재정의함으로써
// 객체를 더 유연하게 사용할 수 있도록 도와줍니다.
// 
// ~c 를 입력했을 때, ID가 출력되도록 만들어 봅시다.

class Human {
private:
	string name;
public:
	Human(string name) {
		this->name = name;
	}
	string operator+() {
		return name;
	}

	void operator<<(string name) {
		this->name = name;
	}
};

int main()
{
	Human me("머글");
	cout << "이름 : " << +me << endl;

	me << "호빗";
	cout << "이름 : " << +me << endl;
}