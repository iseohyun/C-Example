#include <iostream>
using namespace std;

// * Override *
// ��ӿ��� ����ؾ� �� ���� �߿��� ����Դϴ�.
// �ڽ� ���� �θ��� ��� ����� ��ӹ޽��ϴ�.
// ����, ����, ������ ����� �� ����� ��� ����� �� ���̰�, ����ؾ��ϴ� ���(�������̽�)�� �þ ���Դϴ�.
// �ʹ� ���� ����� �ڵ带 ���/�����ϴµ� �ɸ����� �˴ϴ�.
// ����, �̸��� ���� �Լ��� ������ �����ν�, ��� ����� �븮�� ���� Overriding�̶�� �մϴ�.

class Parents {
private:
	string str = "Parents";
public:
	void printStr() {
		cout << str << endl;
	}
};

class Children : public Parents {
private:
	string str = "Children";
public:
	void printStr() {
		cout << str << endl;
	}
};

int main()
{
	Parents par01;
	Children chi01;

	par01.printStr();
	chi01.printStr();
}