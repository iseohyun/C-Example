#include <stdio.h>

// * Continue/break *
// �ݺ������� Continue���� ����Ŀ���� �����߰�ȣ(})���� �̵���Ű�� ȿ���� �ݴϴ�.
// break���� ���� �߰�ȣ ����({})�� ���������� ȿ���� �ֽ��ϴ�.

void main()
{
	for (int i = 0; i < 10; i++) {
		if (i % 3)
			continue;

		printf("continue : %d\n", i);
	}

	for (int i = 0; i < 10; i++) {
		if (i == 5)
			break;

		printf("break : %d\n", i);
	}
}