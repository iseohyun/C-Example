#include <iostream>
using namespace std;

// * ���� �������? *
// ������ ���� ������ ������ ���� ����� �ȴ�. ������, �켱������ �޶����� ���̴�.

class Parents {
public:
	string str = "Parents";
};

class Children : public Parents {
public:
	string str = "Children";
};

void main()
{
	Parents par01;
	Children chi01;

	cout << "str from " << chi01.str << endl;
	cout << "str from " << par01.str << endl;
}