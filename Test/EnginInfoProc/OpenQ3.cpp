/*
*  문 : 출력 결과를 예상하십시오.
*/

#include <stdio.h>

void main()
{
	int number;
	int sum;
	number = 1;
	sum = 0;

	while (number <= 10) {
		sum = sum + number;
		number++;
	}

	printf("\n1+2+...+10 = %d\n", sum);
}