#include <stdio.h>

/* ������ ��ȯ ���
* a�� b�� ���� ��ȯ�ϴ� ����Դϴ�.
*/

int main()
{
	int a = 100, b = 200;

	printf("a : %d, b : %d\n", a, b);

	a ^= b;
	b ^= a;
	a ^= b;

	printf("a : %d, b : %d\n", a, b);
}