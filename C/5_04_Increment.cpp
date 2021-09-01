#include <stdio.h>

// * �������� ����/���� *
// ������� ���� ������ ��� "����"�� ��
// �����Ͷ�� �͵� �ᱹ�� �ּҸ� ��� "����"�̶� �� �� �ֽ��ϴ�.
// �ּ��� ����� ��� �ǵ�, ��������� "�ּ�"��� ���� ������ ũ�⸦ ���� �� �ۿ� �����ϴ�. 4byte
// ��,
// �ּ��� ����������� ����� ũ�Ⱑ ���ΰ��� ����, �����Ǵ� ũ�Ⱑ ������ �˴ϴ�.
// ����� 4byte�̸� ������ 4byte������ �����˴ϴ�.

void main()
{
	char c;
	int i;
	double d;
	char* pC = &c;
	int* pI = &i;
	double* pD = &d;

	printf("DataType |    +0    |    +1    |    +2    |    +3\n");
	printf("Char(%d)  | %08X | %08X | %08X | %08X\n", sizeof(char), pC, pC + 1, pC + 2, pC + 3);
	printf("Int (%d)  | %08X | %08X | %08X | %08X\n", sizeof(int), pI, pI + 1, pI + 2, pI + 3);
	printf("Double(%d)| %08X | %08X | %08X | %08X\n\n", sizeof(double), pD, pD + 1, pD + 2, pD + 3);

	printf("Sizeof : %d, %d, %d\n\n", sizeof(pC), sizeof(pI), sizeof(pD));
}