#include <iostream>
using namespace std;

// * ���� �������? *
// ������ ���� ������ ������ ���� ����� �ȴ�. ������, �켱������ �޶����� ���̴�.

class Parents {
public:
	string str = "Parents^.^)/";
};

class Children : public Parents {
public:
	string str = "Children^_^)a";
};

void main()
{
	Parents Par01;
	Children chi01;

	cout << chi01.str << endl << Par01.str << endl;
}