#include <stdio.h>

int main()
{
	int sum = 0, i, n;
	scanf("%d", &n);
	for (i = 1; sum < n; i++) {
		sum += i;
	}
	printf("%d", --i);
}