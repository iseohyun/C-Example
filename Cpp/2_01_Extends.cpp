#include <iostream>
using namespace std;

// * ��� *
// �θ�� ���� ��ӹ��� ����� �״�� ����� �� �ֽ��ϴ�.
// �̴� ��ü��� ���������ε� �Ǹ�������, �ڵ带 ���� �� �� �ִٴµ� ���� ū ������ �ֽ��ϴ�.
// ������ ������ �����ϴ�.
//		class �ڽ�Ŭ���� : ���������� �θ�Ŭ���� { }

class Parents {
public:
	string str = "Parents";
};

class Children : public Parents {
public:
	string str2 = "Children";
};

void main()
{
	Children chi01;

	cout << "str  from " << chi01.str << endl;
	cout << "str2 from " << chi01.str2 << endl;
}