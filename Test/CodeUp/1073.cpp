#include <stdio.h>

int main()
{
	int n = 1; //ó�� ���� �˻縦 �Ѿ�� ���� 0�� �ƴ� �� �Է�
	scanf("%d", &n);
	while (n != 0)
	{
		printf("%d\n", n);
		scanf("%d", &n);
	}
}