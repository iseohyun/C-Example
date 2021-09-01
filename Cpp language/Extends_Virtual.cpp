#include <iostream>
using namespace std;

// * virtual *
// virtual Ű����� �ű��� ���� ����� �մϴ�.
// ���� ��ӹ޾� �����ؾ� �� overriding �� ������ �ִٸ�, ��ӹ��� ������ ������ �˴ϴ�.
// �ش� Ű���尡 ���ٸ�, �Ʒ��� ��쿡 ��� �θ��� ����� ����� ���Դϴ�.
// �ݵ�� ȣ��Ǿ�� �ϴ� �߻�Ŭ�����ʹ� �ٸ� �����Դϴ�.
//

class Parents {
private:
	string str = "Parents";
public:
	virtual void printStr() {
		cout << str << endl;
	}

	virtual void Virtual() {
		cout << str << "Ver";
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

void main()
{
	Children chi01;
	Parents* pPar;

	pPar = &chi01;
	pPar->printStr();

	Parents Par01;

	pPar = &Par01;
	pPar->printStr();
}