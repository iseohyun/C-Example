#include <stdio.h>

// * Switch�� *
// if���� ��� �����ϴ� ���� switch���� �̿��ϸ� �������� ������ �˴ϴ�.
// ������ ������ �����ϴ�.
//		switch(����) {
//			case ����: ���; break;
//			case ����: ���; ....
//			default: ���;
//		}

void main()
{
	int input;
	printf("[1 ~ 4] ������ ���ڸ� �Է��ϼ��� : ");
	//scanf("%d", &input);
	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
		printf("�ϳ�!\n");
		break;
	case 2:
		printf("��\n");
		break;
	case 3:
		printf("��\n");
		break;
	case 4:
		printf("��!\n");

	default:
		printf("����! ����!\n");
		break;
	}
}