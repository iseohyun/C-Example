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