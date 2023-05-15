// * 생성자 *
// 클래스명과 동일한 이름의 멤버함수를 생성자라고 합니다.
// 생성자는 클래스가 선언됨과 동시에 자동으로 실행이 됩니다.
// 생성자도 오버로딩(Overloading)이 가능합니다.
//
// * 소멸자 *
// 소멸자는 클래스가 소멸될 때 자동으로 호출됩니다.
// 로그나 메모리해제 등 소홀할 수 있는 작업을 수행할 수 있습니다.
// 문법은 아래와 같습니다 :
//		~클래스명()
//		클래스명::클래스명() { 내용; }
//

using namespace std;
#include <iostream>
#include <string>

class Human {
private:
    string name;
public:
    Human(string name) {
        this->name = name;
    }

    ~Human() {
        cout << "소멸 됨" << endl;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }
};

int main()
{
    Human me("호빗");

    cout << "이름 : " << me.getName() << endl;
}