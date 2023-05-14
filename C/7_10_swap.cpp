/* 데이터 교환 방법
* a와 b를 서로 교환하는 방법입니다.
*/

#include <stdio.h>

int main()
{
	int a = 100, b = 200;

	printf("a : %d, b : %d\n", a, b);

	a ^= b;
	b ^= a;
	a ^= b;

	printf("a : %d, b : %d\n", a, b);
}