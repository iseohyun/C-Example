#include <iostream>
using namespace std;

class Unit {
public:
	char lv;
	int exp = 1;
	Unit(int cls) {
		this->lv = cls;
	}
	Unit(int cls, int exp) {
		this->lv = cls;
		this->exp = exp;
	}
	Unit operator+(Unit t) {
		Unit x('A');
		if (lv == t.lv) {
			x.exp = exp + t.exp;
			if (x.exp >= 100) {
				x.lv = lv + 1;
			}
			else {
				x.lv = lv;
			}
		}
		else {
			x.lv = lv > t.lv ? lv : t.lv;
			x.exp = lv > t.lv ? exp : t.exp;
		}
		return x;
	}
	void show() {
		cout << "Lv : " << lv << ", Exp. : " << exp << endl;
	}
};

template<typename T> T UnitMerge(T a) {
	return a + a;
}

int Test_main()
{
	Unit A1('A');
	Unit B1('B');
	Unit B2('B', 2);

	A1.show();

	A1 = UnitMerge(B1);
	A1.show();

	A1 = UnitMerge(B2);
	A1.show();

	return 1;
}