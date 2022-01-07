using namespace std;
#include <iostream>
#include <string>

// * super *
// super키워드는 상위 클라스의 내용을 받아 올 수 있습니다.

class Human {
protected:
	string name = "머글";
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
	string name = "법사";
	string magic;
public:
	Wizard(string magic) {
		this->magic = magic;
	}
	string act() {
		return __super::name + " > " + magic;
	}
};

int main()
{
	Wizard me("화이어볼");
	cout << me.act() << endl;
}