// * 다중상속 *
// 다중 상속은 한번에 여러개의 상속을 받는 것을 말합니다.
// 다중 상속은 아래와 같은 문법으로 가능합니다.
//		class 클래스명 : 접근지시자 부모클래스, 부모클래스, [접근지시자 부모클래스]
// 다중 상속의 문제점은 상속받은 두 클래스의 부모에 같은 이름의 멤버가 존재하면
// 충돌(모호함)을 일으킨다는 것입니다.
// 심지어 아래 예시와 같이 같은 클래스가 두 번 상속을 받는 경우도 발 생할 수 있습니다.
// 따라서 추천하는 코딩 방식은 아닙니다.
// 덧, 자바에서는 다중상속을 원천적으로 금지하고 있습니다.

using namespace std;
#include <iostream>
#include <string>

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

class Elf {
protected:
    string name = "엘프";
    string heal = "회복";
public:
    Elf() {}
    string healing() {
        return name + " > " + heal;
    }
};

class Wizard : public Human, public Elf {
private:
    string name = "법사";
    string magic;
public:
    Wizard(string magic) {
        this->magic = magic;
    }

    string act() {
        return name + " > " + magic + " > " + heal;
        //return __super::name + " > " + magic + " > " + heal;
    }
};

int main()
{
    Wizard me("화이어볼");

    cout << me.act() << endl << me.healing() << endl;
}