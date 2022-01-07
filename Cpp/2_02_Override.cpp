using namespace std;
#include <iostream>
#include <string>

// * Override *
// ��ӿ��� ����ؾ� �� ���� �߿��� ����Դϴ�.
// �ڽ� ���� �θ��� ��� ����� ��ӹ޽��ϴ�.
// ����, ����, ������ ����� �� ����� ��� ����� �� ���̰�, ����ؾ��ϴ� ���(�������̽�)�� �þ ���Դϴ�.
// �ʹ� ���� ����� �ڵ带 ���/�����ϴµ� �ɸ����� �˴ϴ�.
// ����, �̸��� ���� �Լ��� ������ �����ν�, ��� ����� �븮�� ���� Overriding�̶�� �մϴ�.

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
	string name = "����";
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
	Wizard me("ȭ�̾");

	cout << me.act() << endl;
}