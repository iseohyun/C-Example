using namespace std;
#include <iostream>
#include <string>

// * virtual *
//  �ڽ�Ŭ������ ������ ��ü�� �θ�Ŭ������ ��鸵�� �����մϴ�.
// �ֳ��ϸ�, �θ�Ŭ������ � ������ �ϵ�, �� ��� ����� �̹� �ڽ� Ŭ������ ������ �ֱ� �����Դϴ�.
// ������ �ڽ�Ŭ�������� �̹� �������̵� �� ����ӿ��� �ұ��ϰ�, ��鸵 �ϴ� ��ü�� �θ��̱� ������, �θ��� ����� �̿��Ϸ��� ������ �ֽ��ϴ�.
// ����, ���� ����� ��Ȳ�� ���缭 �������� ����ϱ� ���ؼ� virtual Ű���带 ����մϴ�.
//

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
	Human *you = &me;

	cout << (*you).act() << endl;
}