#include <iostream>
using namespace std;

// * abstract *
// �߻�Ŭ������ ����ٴ� ���� �Ĵ뿡 ������ �Ǳ⸦ ����Ѵٴ� ���� �����ϴ�.
// �����Ǹ� ����ϴ� ������ ������� ������ �����ϱ� ���� ȿ���� �ֽ��ϴ�.
// �� ������ �Լ��� �����ؾ� �ұ��? �� �����غ�����. �ؾ��� �� ����� ���� ����δ� �Ͱ� ���� ȿ���Դϴ�.
//

class Parents {	// �߻��Լ��� �����ϸ� �߻�Ŭ������ �Ǿ�, �ν��Ͻ�(����)�� ���� �� �����ϴ�.
private:
	string str = "Parents";
public:
	virtual void printStr() = 0 { // �߻��Լ���� �ǹ̷� = 0�� �ٿ��ݴϴ�.
		cout << str << endl;
	}

	void normal() {	// �߻�Ŭ�������� �Ϲ� �Լ��� ���� �� �ֽ��ϴ�.
		cout << str << "Nor\n";
	}
};

class Children : public Parents {
private:
	string str = "Children";
public:
	void printStr() {	// �߻��Լ��� �ݵ�� ������ �Ǿ���մϴ�.
		cout << str << endl;
	}

	void super() {	// �߻��Լ��� �Ǿ��ٰ� �ص�, ���� �Լ��� ������ ������ ���õǴ� ���� �ƴմϴ�.
		__super::printStr();
	}
};

void main()
{
	Children chi01;

	chi01.printStr();
	chi01.super();
	chi01.normal();

	// Parents Par01;	// �ν��Ͻ�(����)�� ���� �� �����ϴ�.
}