#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	a = a < b ? a : b;
	c = a < c ? a : c;
	printf("%d\n", c);
}