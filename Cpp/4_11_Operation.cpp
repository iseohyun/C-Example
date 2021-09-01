#include <iostream>
using namespace std;

// * 기본연산자에 아래와 같은 연산자가 추가되었습니다. *
//-> true, false, and, or, xor, not
//-> bitand, bitor
//-> and_eq, or_eq, xor_eq, not_eq

int main()
{
	// true, false, and, or, xor, not
	if (true and true) {
		cout << "true and true\n";
	}

	if (true or false) {
		cout << "true or false\n";
	}

	bool X = false;
	if (not(X)) {
		cout << "not(false)\n";
	}

	// bitand, bitor
	printf("0x55 bitand 0xCC = 0x%x\n", (0x55 bitand 0xCC));
	printf("0x55 bitor  0xCC = 0x%x\n", (0x55 bitor 0xCC));

	// and_eq, or_eq, xor_eq, not_eq
	int a = 0x0F;
	a and_eq 0xAA;	// a &= 0xAA;
	printf("a &= 0xAA > %X\n", a);
	a xor_eq 0xAA;	// a ^= 0xAA;
	printf("a ^= 0xAA > %X\n", a);
}