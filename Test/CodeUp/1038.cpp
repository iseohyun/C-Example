#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	if (n > 0 && m > 0) {
		printf("%u", (unsigned int)n + m);
	}
	else if (n < 0 && m < 0) {
		printf("-%u", n + m);
	}
	else {
		printf("%u", n + m);
	}
}