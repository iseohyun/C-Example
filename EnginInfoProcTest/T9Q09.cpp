#include <stdio.h>

void main()
{
	int input;
	int output = 0;
	printf("자연수 입력 : ");
	scanf_s("%d", &input);
	while (input)
	{
		output += /**1***/input % 10;
		input /= /**2***/10;
		printf("자릿수 합계 : % d\n", output);
	}
}