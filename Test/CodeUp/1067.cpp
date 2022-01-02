#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	printf("%s\n", a >= 0 ? "plus" : "minus");
	printf("%s\n", a % 2 ? "odd" : "even");
}