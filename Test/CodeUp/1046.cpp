#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d\n", a + b + c);
	printf("%.1f\n", (a + b + c) / 3.);
}