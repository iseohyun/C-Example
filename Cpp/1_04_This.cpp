// * this *
// this는 자기 자신의 주소를 반환합니다.
// 주석처리된 부분의 주석을 삭제하고, 어떻게 결과가 달라지는지 확인해 봅니다.

using namespace std;
#include <iostream>
#include <string>

class Human {
private:
	string name = "머글";
public:
	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}
	friend class ELF;
};

int main()
{
	Human me;
	me.setName("호빗");

	cout << "이름 : " << me.getName() << endl;
}