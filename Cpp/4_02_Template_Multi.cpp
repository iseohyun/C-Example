#include <iostream>
using namespace std;

// * template *
// 2개 이상의 template를 지정하는 방법입니다.
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