#include <iostream>
using namespace std;

// * template *
// 2�� �̻��� template�� �����ϴ� ����Դϴ�.
// 

template <typename T, typename U> 
void func(T& a, U& b) {
	a += b;
}

int main()
{
	int a = 3;
	float b = 3.3f;
	func(a, b);
	cout << "a : " << a << ", b : " << b << endl;

	func(b, a);
	cout << "a : " << a << ", b : " << b << endl;
}