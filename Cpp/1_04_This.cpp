using namespace std;
#include <iostream>
#include <string>

// * this *
// this�� �ڱ� �ڽ��� �ּҸ� ��ȯ�մϴ�.
// �ּ�ó���� �κ��� �ּ��� �����ϰ�, ��� ����� �޶������� Ȯ���� ���ϴ�.

class Human {
private:
	string name = "�ӱ�";
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
	me.setName("ȣ��");

	cout << "�̸� : " << me.getName() << endl;
}