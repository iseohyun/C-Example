#include <iostream>
using namespace std;

// * abstract *
// 추상클래스로 만든다는 것은 후대에 재정의 되기를 희망한다는 말과 같습니다.
// 재정의를 희망하는 이유는 설계상의 누락을 방지하기 위한 효과가 있습니다.
// 왜 재정의 함수를 지정해야 할까요? 잘 생각해보세요. 해야할 일 목록을 굳이 적어두는 것과 같은 효과입니다.
//

class Parents {	// 추상함수를 포함하면 추상클레스가 되어, 인스턴스(선언)를 만들 수 없습니다.
private:
	string str = "Parents";
public:
	virtual void printStr() = 0 { // 추상함수라는 의미로 = 0을 붙여줍니다.
		cout << str << endl;
	}

	void normal() {	// 추상클래스에도 일반 함수를 넣을 수 있습니다.
		cout << str << "Nor\n";
	}
};

class Children : public Parents {
private:
	string str = "Children";
public:
	void printStr() {	// 추상함수는 반드시 재정의 되어야합니다.
		cout << str << endl;
	}

	void super() {	// 추상함수가 되었다고 해도, 상위 함수의 내용이 완전히 무시되는 것은 아닙니다.
		__super::printStr();
	}
};

void main()
{
	Children chi01;

	chi01.printStr();
	chi01.super();
	chi01.normal();

	// Parents Par01;	// 인스턴스(선언)을 만들 수 없습니다.
}