#include <stdio.h>

// * ���ڿ� *
// ���ڿ��� (�翬�ϰԵ�) ���ڵ��� �����Դϴ�.
// ���ڿ��� Ư¡��, �������� 0(=Null)�̾�� �Ѵٴ� ���Դϴ�.

int main()
{
	char input[100] = { 0, }; // 0 ���� �ʱ�ȭ���� ������ ������ �������� ����� �˴ϴ�.

	printf("���ڸ� �Է��ϼ��� : ");
	//scanf("%c", input);
	scanf_s("%c", input, (unsigned int)sizeof(input));
	printf("�Է��� ���� : %c\n", input[0]);

	for (int i = 0; i < 100; i++) {	// ����(Enter)�� ������ ���� 2���� �Էµ˴ϴ�. (\n\r)
		if (getchar() == '\n') break;
	}

	printf("���ڿ��� �Է��ϼ��� : ");
	//scanf("%s", &input[1]);
	scanf_s("%s", input + 1, (unsigned int)(sizeof(input) - 1));
	printf("�Է��� ��� ���� : %s\n", input);
}