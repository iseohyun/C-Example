/*
* 문) 출력 결과를 예측하세요
*/
#include <stdio.h>

void main()
{
	char* p = (char*)"KOREA";
	printf("%s\n", p);
	printf("%s\n", p + 3);
	printf("%c\n", *p);
	printf("%c\n", *(p + 3));
	printf("%c\n", *p + 2);
}