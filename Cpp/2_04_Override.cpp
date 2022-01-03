#include <iostream>
using namespace std;

// * Override *
// 상속에서 기억해야 할 가장 중요한 기능입니다.
// 자식 노드는 부모의 모든 기능을 상속받습니다.
// 따라서, 손주, 증손주 기능은 그 기능이 계속 방대해 질 것이고, 기억해야하는 기능(인터페이스)도 늘어날 것입니다.
// 너무 많은 기능은 코드를 사용/재사용하는데 걸림돌이 됩니다.
// 따라서, 이름이 같은 함수를 재정의 함으로써, 기능 향상을 노리는 것을 Overriding이라고 합니다.

class Parents {
private:
	string str = "Parents";
public:
	void printStr() {
		cout << str << endl;
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

int main()
{
	Parents par01;
	Children chi01;

	par01.printStr();
	chi01.printStr();
}