#include <iostream>
using namespace std;

// * template *
// 기존에 함수 오버로딩(overloading)이 변수형에 의한 것이었다면,
// template는 무형의 변수형을 지정하고, 그에 맞는 형태의 함수가 빌드 되는 것을 지원합니다.
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
	// 아무것도 하지 않음
}

// 실습과제1:
// 
// 어떤 변수든 2배가 되는함수를 만들어보자.

//		1 -> 2
//		1.1 -> 2.2
//		test -> testtest (string이용)

// 실습과제2:
//		실습과제 1에서 만든 템플릿을 이용하여 아래 Unit 클래스를 이용해서 연산을 해보자. 
//			(메인함수보다 위에 있어야 합니다.)
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