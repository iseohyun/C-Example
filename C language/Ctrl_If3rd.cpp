#include <stdio.h>

// * 3�׿����� *
// if���� ���� ȿ���� ���� �����ڸ� 3�׿����ڶ�� �մϴ�.
// ������ ������ �����ϴ�.
//		(�Ǵܹ�)?��:����;

void main()
{
	int i = 5;
	int j = 7;

	// 3�� ������
	int resault = (i > j) ? i : j;
	printf("Max : %d\n", resault);

	// if�� ��� (���� ���)
	if (i > j) {
		resault = i;
		printf("If : %d\n", resault);
	}
	else {
		resault = j;
		printf("If : %d\n", resault);
	}
}