using namespace std;
#include <iostream>
#include <string>

// * ������ �����ε� *
// ������ �����ε��� �����ڸ� ������ �ϴ� �۾��� �մϴ�.
// ��ü�������� �߻�ȭ �� ��ü���� ���������� �䱸�Ǵ� ������ �����������ν�
// ��ü�� �� �����ϰ� ����� �� �ֵ��� �����ݴϴ�.
// 
// ~c �� �Է����� ��, ID�� ��µǵ��� ����� ���ô�.

class Human {
private:
	string name;
public:
	Human(string name) {
		this->name = name;
	}
	string operator+() {
		return name;
	}

	void operator<<(string name) {
		this->name = name;
	}
};

int main()
{
	Human me("�ӱ�");
	cout << "�̸� : " << +me << endl;

	me << "ȣ��";
	cout << "�̸� : " << +me << endl;
}