#include <stdio.h>

void main()
{
	int input;
	int output = 0;
	printf("�ڿ��� �Է� : ");
	scanf_s("%d", &input);
	while (input)
	{
		output += /**1***/input % 10;
		input /= /**2***/10;
		printf("�ڸ��� �հ� : % d\n", output);
	}
}