using namespace std;
#include <iostream>
#include <string>

// * virtual *
//  자식클래스로 생성된 객체를 부모클래스로 헨들링이 가능합니다.
// 왜냐하면, 부모클래스가 어떤 행위를 하든, 그 모든 기능은 이미 자식 클래스가 가지고 있기 때문입니다.
// 문제는 자식클래스에서 이미 오버라이딩 된 멤버임에도 불구하고, 헨들링 하는 객체가 부모이기 때문에, 부모의 멤버를 이용하려는 습성이 있습니다.
// 따라서, 향상된 기능을 상황에 맞춰서 동적으로 사용하기 위해서 virtual 키워드를 사용합니다.
//

class Human {
protected:
	string name = "머글";
public:
	Human() {}
	Human(string name) {
		this->name = name;
	}

	virtual string act() { // virtual을 삭제하고 실행해봅니다.
		return name;
	}
};

class Wizard : public Human {
private:
	string name = "법사";
	string magic;
public:
	Wizard(string magic) {
		this->magic = magic;
	}

	string act() {
		return name + " > " + magic;
	}
};

int main()
{
	Wizard me("화이어볼");
	Human *you = &me;

	cout << (*you).act() << endl;
}