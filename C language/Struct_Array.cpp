#include <stdio.h>

// * ����ü�迭 *
// ����ü�� �迭�� ���� �� �ֽ��ϴ�.

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