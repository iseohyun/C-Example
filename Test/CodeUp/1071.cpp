#include <stdio.h>

int main()
{
	int n;
reload: //���̺��� �ݷ�(:)���� ������, �Ϲ������� �鿩���⸦ ���� �ʴ´�.
	scanf("%d", &n);
	if (n != 0) {
		printf("%d\n", n);
		goto reload; //reload��� �����ִ� ���̺�� ���� �̵�
	}
}