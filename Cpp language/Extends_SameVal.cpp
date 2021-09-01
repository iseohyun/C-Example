#include <iostream>
using namespace std;

// * 같은 변수라면? *
// 다음과 같이 본인의 변수가 먼저 출력이 된다. 하지만, 우선순위가 달라졌을 뿐이다.

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