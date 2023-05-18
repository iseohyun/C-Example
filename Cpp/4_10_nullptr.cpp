#include <iostream>
using namespace std;

// * nullptr *
// nullptr = 0;

void foo(int a) {
	cout << "input : " << a << endl;
}

void foo(int* a) {
	if (a == 0) {
		cout << "No target" << endl;
		return;
	}
	cout << "GoTo: " << a << endl;
}

int main()
{
	// case 1: nullptr은 0입니다.
	int* p = nullptr;
	cout << p << endl;

	// case 2: nullptr은 ptr입니다.
	foo(0);
	foo(nullptr);
}