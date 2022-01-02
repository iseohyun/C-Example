#include <stdio.h>

int main()
{
	char n;
	do
	{
		scanf("%c ", &n);
		printf("%c\n", n);
	} while (n != 'q');
}