// * class *
//	접근 제어자의 역할은 중요한 제어변수를 외부 인터페이스(조작)으로부터 보호하는 역할을 합니다.
//	접근 제어자는 private > protected > public 순으로 private가 가장 강력한 보호를 합니다.
//	protected는 상속과 관련된 보호레벨입니다.
// 
//	만약 pv에 들어가야 하는 변수가 반드시 0 < pv < 10이라면 setPv어떻게 제어하시겠습니까?
//

using namespace std;
#include <iostream>
#include <string>

class Human {
private:
    string name;
public:
    string getName() {
        return name;
    }

    void setName(string newName) {
        name = newName;
    }
};

int main()
{
    Human my;

    //my.name = "머글"; // 접근이 되지 않기 때문에 에러가 발생

    cout << "Name : " << my.getName() << endl;

    my.setName("호빗");

    cout << "New Name : " << my.getName() << endl;
}