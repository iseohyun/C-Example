#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d", &n);
reload:
	scanf("%d", &m);
	if (n > 0) {
		printf("%d\n", m);
		n--;
		goto reload;
	}
}