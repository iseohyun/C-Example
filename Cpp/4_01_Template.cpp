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
	// 아무것도 하지 않음
}

// 실습과제1:
// 
// 어떤 변수든 2배가 되는함수를 만들어보자.

//		1 -> 2
//		1.1 -> 2.2
//		test -> testtest (string이용)

// 실습과제2: (4_01a_test1에서 작성하세요.)
//		게임을 만드려고 합니다. 유닛은 레벨(lv)와 경험치(exp)를 가지고 있습니다.
// 
//		유닛 2개를 다음 함수(UnitMerge)를 이용하여 합칠 수 있습니다.
//			합쳐지는 두 유닛의 경험치는 산술합(a+b)이고, 100을 넘어가면 레벨이 올라갑니다.
//			만약 두 유닛의 lv이 같다고 하면, 높은 lv로 합쳐집니다.
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