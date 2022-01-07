using namespace std;
#include <iostream>
#include <string>

// * ������ *
// Ŭ������� ������ �̸��� ����Լ��� �����ڶ�� �մϴ�.
// �����ڴ� Ŭ������ ����ʰ� ���ÿ� �ڵ����� ������ �˴ϴ�.
// �����ڵ� �����ε�(Overloading)�� �����մϴ�.
//
// * �Ҹ��� *
// �Ҹ��ڴ� Ŭ������ �Ҹ�� �� �ڵ����� ȣ��˴ϴ�.
// �α׳� �޸����� �� ��Ȧ�� �� �ִ� �۾��� ������ �� �ֽ��ϴ�.
// ������ �Ʒ��� �����ϴ� :
//		~Ŭ������()
//		Ŭ������::Ŭ������() { ����; }
//

class Human {
private:
	string name;
public:
	Human(string name) {
		this->name = name;
	}

	~Human() {
		cout << "�Ҹ� ��" << endl;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}
};

int main()
{
	Human me("ȣ��");

	cout << "�̸� : " << me.getName() << endl;
}