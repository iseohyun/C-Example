using namespace std;
#include <iostream>
#include <string>

// * ���߻�� *
// ���� ����� �ѹ��� �������� ����� �޴� ���� ���մϴ�.
// ���� ����� �Ʒ��� ���� �������� �����մϴ�.
//		class Ŭ������ : ���������� �θ�Ŭ����, �θ�Ŭ����, [���������� �θ�Ŭ����]
// ���� ����� �������� ��ӹ��� �� Ŭ������ �θ� ���� �̸��� ����� �����ϸ�
// �浹(��ȣ��)�� ����Ų�ٴ� ���Դϴ�.
// ������ �Ʒ� ���ÿ� ���� ���� Ŭ������ �� �� ����� �޴� ��쵵 �� ���� �� �ֽ��ϴ�.
// ���� ��õ�ϴ� �ڵ� ����� �ƴմϴ�.
// ��, �ڹٿ����� ���߻���� ��õ������ �����ϰ� �ֽ��ϴ�.

class Human {
protected:
	string name = "�ӱ�";
public:
	Human() {}
	Human(string name) {
		this->name = name;
	}

	virtual string act() { // virtual�� �����ϰ� �����غ��ϴ�.
		return name;
	}
};

class Elf {
protected:
	string name = "����";
	string heal = "ȸ��";
public:
	Elf() {}
	string healing() {
		return name + " > " + heal;
	}
};

class Wizard : public Human, public Elf {
private:
	string name = "����";
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
	Wizard me("ȭ�̾");

	cout << me.act() << endl << me.healing() << endl;
}