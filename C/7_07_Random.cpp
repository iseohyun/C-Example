#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	printf("랜덤수 : 매번 같은 수가 출력 됨 \n");
	for (int i = 0; i < 10; i++) {
		printf("%5d", rand() % 10000);
	}
	
	printf("\n\n랜덤수 : 시간에 따라서 초기화 됨\n");
	srand(time(NULL));

	for (int i = 0; i < 10; i++) {
		printf("%5d", rand() % 10000);
	}

	printf("\n\n");
}