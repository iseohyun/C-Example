#include <iostream>
using namespace std;

// * super *
// superŰ����� ���� Ŭ���� ������ �޾� �� �� �ֽ��ϴ�.

class Parents {
public:
	string str = "Parents";
};

class Children : public Parents {
public:
	string str = "Children";
	string getStr() {
		return __super::str;
	}
};

void main()
{
	Children chi01;

	cout << chi01.getStr() << endl;
}