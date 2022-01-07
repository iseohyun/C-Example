using namespace std;
#include <iostream>
#include <string>

// * friend *
// 접근 제어를 예외적으로 무시해야할 경우,
// 기존의 설계를 변경하지 않고, 접근 할 수 있는 키워드가 존재합니다.

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

	friend class ELF; // 해당 키워드를 삭제하면 어떤 명령어에서 에러가 나는지 확인 해보자.
};

class ELF {
public:
	void setHuman(Human &human, string name) {
		human.name = name;
	}
};

int main()
{
	Human me;
	ELF elf;

	me.setName("머글");
	cout << "이름 : " << me.getName() << endl;

	elf.setHuman(me, "호빗");

	cout << "이름 : " << me.getName() << endl;
}