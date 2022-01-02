#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%s\n", a % 2 ? "odd" : "even");
	printf("%s\n", b % 2 ? "odd" : "even");
	printf("%s", c % 2 ? "odd" : "even");
}