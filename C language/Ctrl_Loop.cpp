#include <stdio.h>

// * �ݺ��� *
// �ݺ��� �ϴ� ����� �� 3������ �ֽ��ϴ�.
// �ݺ��� �Ǵܹ��� ������ �� ���� ������ �˴ϴ�.
// for��
//		for(�ʱ�ȭ;�Ǵܹ�;������) { ����; }
// while��
//		while(�Ǵܹ�) { ����; }
// do ... while��
//		do { ����; } while(�Ǵܹ�);
//
// do ... while���� �ּ��� 1�� �����ϴ� �������� �ֽ��ϴ�.

void main()
{
	int i = 10;
	while (--i) {
		printf("while : %d\n", i);
	}

	i = 10;
	do {
		printf("do while: %d\n", i);
	} while (--i);

	for (int j = 0; j < 10; j++) {
		printf("for: %d\n", j);
	}
}