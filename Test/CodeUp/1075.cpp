#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	n--;
	while (n >= 0)
	{
		printf("%d\n", n);
		n = n - 1; //n--;¿Í °°´Ù.
	}
}