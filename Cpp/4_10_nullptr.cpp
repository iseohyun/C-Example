#include <iostream>
using namespace std;

// * nullptr *
// nullptr = 0;

int main()
{
	int i = 10;
	int* p = &i;
	cout << *p << endl;

	p = nullptr;

	cout << p << endl;
}