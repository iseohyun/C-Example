using namespace std;
#include <iostream>
#include <string>

// * super *
// superŰ����� ���� Ŭ���� ������ �޾� �� �� �ֽ��ϴ�.

class Human {
protected:
	string name = "�ӱ�";
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
	string name = "����";
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
	Wizard me("ȭ�̾");
	cout << me.act() << endl;
}