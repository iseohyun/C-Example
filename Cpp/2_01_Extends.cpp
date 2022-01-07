using namespace std;
#include <iostream>
#include <string>

// * ��� *
// �θ�� ���� ��ӹ��� ����� �״�� ����� �� �ֽ��ϴ�.
// �̴� ��ü��� ���������ε� �Ǹ�������, �ڵ带 ���� �� �� �ִٴµ� ���� ū ������ �ֽ��ϴ�.
// ������ ������ �����ϴ�.
//		class �ڽ�Ŭ���� : ���������� �θ�Ŭ���� { }

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
	Wizard me("����", "ȭ�̾");

	cout << me.act() << " > " << me.spell() << endl;
}