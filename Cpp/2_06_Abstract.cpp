// * abstract *
// 추상클래스로 만든다는 것은 후대에 재정의 되기를 희망한다는 말과 같습니다.
// 재정의를 희망하는 이유는 설계상의 누락을 방지하기 위한 효과가 있습니다.
// 왜 재정의 함수를 지정해야 할까요? 잘 생각해보세요. 해야할 일 목록을 굳이 적어두는 것과 같은 효과입니다.
//

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

    // 반드시 재정의 되어야 하는 함수
    virtual string act() = 0;
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
    // Most Vexing Parse 문제 감지
    // hu()가 함수를 의미하는 것인지, 변수를 선언한 것인지 애매하다는 의미
    // 경고 : empty parentheses were disambiguated as a function declaration [-Wvexing-parse]
    Human hu();
    Wizard me("화이어볼~!");

    cout << me.act() << endl;
}