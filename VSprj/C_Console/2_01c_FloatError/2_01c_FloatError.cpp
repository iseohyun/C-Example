#include <stdio.h>

int main()
{
	double p = 0.1;
	printf("내가 원하는 결과 : %f\n", p * 1000);
	for (int i = 0; i < 1000; i++) {
		p += 0.1;
	}
	printf("실제 연산 결과 : %f\n", p);
}