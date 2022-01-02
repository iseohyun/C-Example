#include <stdio.h>

int main()
{
	char n;
	scanf("%c", &n);
	n = n - 'A' + 10;
	for (int i = 1; i < 16; i++) {
		printf("%1X*%1X=%X\n", n, i, n * i);
	}
}