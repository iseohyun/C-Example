#include <iostream>
using namespace std;

// * virtual *
// virtual 키워드는 신기루와 같은 기능을 합니다.
// 만약 상속받아 실행해야 할 overriding 될 내용이 있다면, 상속받은 내용이 실행이 됩니다.
// 해당 키워드가 없다면, 아래의 경우에 모두 부모의 기능이 실행될 것입니다.
// 반드시 호출되어야 하는 추상클레스와는 다른 개념입니다.
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