#include <stdio.h>

void main()
{
	int i = 0, c = 0;

	while (i < 10) {
		i++;
		c *= i;
	}

	printf("%d", c);
}