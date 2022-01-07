using namespace std;
#include <iostream>
#include <string>


// * abstract *
// �߻�Ŭ������ ����ٴ� ���� �Ĵ뿡 ������ �Ǳ⸦ ����Ѵٴ� ���� �����ϴ�.
// �����Ǹ� ����ϴ� ������ ������� ������ �����ϱ� ���� ȿ���� �ֽ��ϴ�.
// �� ������ �Լ��� �����ؾ� �ұ��? �� �����غ�����. �ؾ��� �� ����� ���� ����δ� �Ͱ� ���� ȿ���Դϴ�.
//

class Human {
protected:
	string name = "�ӱ�";
public:
	Human() {}
	Human(string name) {
		this->name = name;
	}

	// �ݵ�� ������ �Ǿ�� �ϴ� �Լ�
	virtual string act() = 0;
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
	Human hu();
	Wizard me("ȭ�̾");

	cout << me.act() << endl;
}