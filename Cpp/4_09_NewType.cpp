#include <iostream>
using namespace std;

// * new Type *
// bool (1bit)
// auto는 대입되는 변수에 따라서 자동으로 결정합니다.
//-> bool, wchar_t, char16_t, char32_t, auto

int main()
{
	bool b;
	wchar_t wc;	//unsigned 16bit
	char16_t c16;
	char32_t c32;

	b = -1;
	c32 = -1;
	c16 = -1;
	wc = -1;
	printf("%08X, %08X, %08X, %08X\n", b, c32, c16, wc);

	auto a1 = wc;
	auto a2 = c32;
	auto a3 = b;
	printf("auto : %d, %d, %d\n", a1, a2, a3);
}