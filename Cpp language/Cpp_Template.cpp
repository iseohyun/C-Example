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