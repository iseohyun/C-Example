#include <stdio.h>

// * 산술연산 *
// 기본적인 사친연산에, 나머지 연산(%)이 추가되었습니다.
// 나머지 연산은 ..으로 나눈 나머지를 반환합니다.

void main()
{
	int i = 15;
	int j = 7;

	printf("Num1 : %d, Num2 : %d\n", i, j);
	printf("+ 연산자 : %d\n", i + j);
	printf("- 연산자 : %d\n", i - j);
	printf("* 연산자 : %d\n", i * j);
	printf("/ 연산자 : %d\n", i / j);
	printf("%% 연산자 : %d\n", i % j);
}