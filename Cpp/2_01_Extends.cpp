using namespace std;
#include <iostream>
#include <string>

// * 상속 *
// 부모로 부터 상속받은 기능을 그대로 사용할 수 있습니다.
// 이는 객체라는 개념적으로도 훌륭하지만, 코드를 재사용 할 수 있다는데 아주 큰 장점이 있습니다.
// 문법은 다음과 같습니다.
//		class 자식클래스 : 접근제어자 부모클래스 { }

class Human {
protected:
	string name;
public:
	Human() {}
	Human(string name) {
		this->name = name;
	}
	string act() {
		return name;
	}
};

class Wizard : public Human {
private:
	string magic;
public:
	Wizard(string name, string magic) {
		this->name = name;
		this->magic = magic;
	}
	string spell() {
		return magic;
	}
};

int main()
{
	Wizard me("법사", "화이어볼");

	cout << me.act() << " > " << me.spell() << endl;
}