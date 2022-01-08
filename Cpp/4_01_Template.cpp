#include <iostream>
using namespace std;

// * template *
// ������ �Լ� �����ε�(overloading)�� �������� ���� ���̾��ٸ�,
// template�� ������ �������� �����ϰ�, �׿� �´� ������ �Լ��� ���� �Ǵ� ���� �����մϴ�.
// 

template <typename T>
void Swap(T& a, T& b);

template <>
void Swap<double>(double&, double&);

template<typename T> T makeDouble(T a) {
	return a + a;
}

int main()
{
	int a = 3, b = 5;
	Swap(a, b);
	cout << "a : " << a << ", b : " << b << endl;

	string x = "Origin", y = "imitation";
	Swap(x, y);
	cout << "x : " << x << ", y : " << y << endl;

	double i = 3.14, j = 9.8;
	Swap(i, j);
	cout << "i : " << i << ", j : " << j << endl;
	UnitX A1('A');
	UnitX B1('B');
	UnitX B2('B', 2);
	
	A1 = makeDouble(B1);
	A1.show();
}

template <typename T>
void Swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <>
void Swap<double>(double&, double&) {
	// �ƹ��͵� ���� ����
}

// �ǽ�����1:
// 
// � ������ 2�谡 �Ǵ��Լ��� ������.

//		1 -> 2
//		1.1 -> 2.2
//		test -> testtest (string�̿�)

// �ǽ�����2:
//		�ǽ����� 1���� ���� ���ø��� �̿��Ͽ� �Ʒ� Unit Ŭ������ �̿��ؼ� ������ �غ���. 
//			(�����Լ����� ���� �־�� �մϴ�.)
//

class UnitX {
public:
	char lv;
	int exp = 1;
	UnitX(int cls) {
		this->lv = cls;
	}
	UnitX(int cls, int exp) {
		this->lv = cls;
		this->exp = exp;
	}
	UnitX operator+(UnitX t) {
		UnitX x('A');
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