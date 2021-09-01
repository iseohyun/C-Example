#include <stdio.h>

int r1() {
	return 4;
}

int r10() {
	return (30 + r1());
}

int r100() {
	return (200 + r10());
}

void main()
{
	printf("%d", r100());
}