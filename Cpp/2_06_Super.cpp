#include <iostream>
using namespace std;

// * super *
// super키워드는 상위 클라스의 내용을 받아 올 수 있습니다.

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