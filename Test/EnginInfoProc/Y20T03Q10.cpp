/*
* 문) 출력 결과를 예측하세요.
*/
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