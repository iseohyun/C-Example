#include <stdio.h>

// * static ���� *
// static Ű���带 ����� ������ �߰�ȣ({})�� ������� �Ҹ���� �ʽ��ϴ�.
// �� ������ �ش� Ű����� ���� ȣ��Ǵ� ��ġ�� stack�� �ƴϱ� �����Դϴ�.
// �Լ��� �Ҹ�� ������� ������ �����ϰ��� �� �� ����� �� �ֽ��ϴ�.

void func01()
{
	int i = 0;
	i++;
	printf("ȣ�� �� Ƚ�� : %d\n", i);
}

void func02()
{
	static int i = 0;
	i++;
	printf("ȣ�� �� Ƚ�� : %d\n", i);
}

void main()
{
	printf(" > Static ��� ����\n");
	for (int i = 0; i < 10; i++)
		func01();

	printf(" > Static ��� ��\n");
	for (int i = 0; i < 10; i++)
		func02();
}