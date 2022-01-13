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

// �ǽ�����2: (4_01a_test1���� �ۼ��ϼ���.)
//		������ ������� �մϴ�. ������ ����(lv)�� ����ġ(exp)�� ������ �ֽ��ϴ�.
// 
//		���� 2���� ���� �Լ�(UnitMerge)�� �̿��Ͽ� ��ĥ �� �ֽ��ϴ�.
//			�������� �� ������ ����ġ�� �����(a+b)�̰�, 100�� �Ѿ�� ������ �ö󰩴ϴ�.
//			���� �� ������ lv�� ���ٰ� �ϸ�, ���� lv�� �������ϴ�.
//
//			template<typename T> T UnitMerge(T a) {
//				return a + a;
//			}

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