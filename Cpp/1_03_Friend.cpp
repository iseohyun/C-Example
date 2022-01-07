using namespace std;
#include <iostream>
#include <string>

// * friend *
// ���� ��� ���������� �����ؾ��� ���,
// ������ ���踦 �������� �ʰ�, ���� �� �� �ִ� Ű���尡 �����մϴ�.

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

	friend class ELF; // �ش� Ű���带 �����ϸ� � ��ɾ�� ������ ������ Ȯ�� �غ���.
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

	me.setName("�ӱ�");
	cout << "�̸� : " << me.getName() << endl;

	elf.setHuman(me, "ȣ��");

	cout << "�̸� : " << me.getName() << endl;
}