#include <stdio.h>

// * 구조체배열 *
// 구조체도 배열로 만들 수 있습니다.

typedef struct {
	int i;
	int j;
}STR1;

void main()
{
	STR1 str1[10];

	for (int i = 0; i < 10; i++) {
		str1[i].i = i + 2;
		str1[i].j = i * 3;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d, %d\n", str1[i].i, str1[i].j);
	}
}