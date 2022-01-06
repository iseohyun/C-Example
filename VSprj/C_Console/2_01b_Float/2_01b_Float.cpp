// 강의 자료
// https://example-code.tistory.com/entry/%EB%B6%80%EB%8F%99%EC%86%8C%EC%88%98%EC%A0%90

#include <stdio.h>

int main()
{
	int p = 0b11000010111011010100000000000000;
	// C2 ED 40 00
	float q = -118.625;

	printf("2진수 : %X\n", p);
	printf("소수 였던 것 : %X\n", *((int*)&q));
	printf("2진수 였던 것 : %f\n", *((float*)&p));
}