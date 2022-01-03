#include <stdio.h>

// * �������� ����/���� *
// ������� ���� ������ ��� "����"�� ��
// �����Ͷ�� �͵� �ᱹ�� �ּҸ� ��� "����"�̶� �� �� �ֽ��ϴ�.
// �ּ��� ����� ��� �ǵ�, ��������� "�ּ�"��� ���� ������ ũ�⸦ ���� �� �ۿ� �����ϴ�. 4byte
// ��,
// �ּ��� ����������� ����� ũ�Ⱑ ���ΰ��� ����, �����Ǵ� ũ�Ⱑ ������ �˴ϴ�.
// ����� 4byte�̸� ������ 4byte������ �����˴ϴ�.

int main()
{
	char c;
	int i;
	double d;
	char* pC = &c;
	int* pI = &i;
	double* pD = &d;

	printf("DataType |        +0        |        +1        |        +2        |        +3\n");
	printf("Char(%d)  | %p | %p | %p | %p\n", (int)sizeof(char), pC, pC + 1, pC + 2, pC + 3);
	printf("Int (%d)  | %p | %p | %p | %p\n", (int)sizeof(int), pI, pI + 1, pI + 2, pI + 3);
	printf("Double(%d)| %p | %p | %p | %p\n\n", (int)sizeof(double), pD, pD + 1, pD + 2, pD + 3);

	printf("Sizeof : %llu, %llu, %llu\n\n", sizeof(pC), sizeof(pI), sizeof(pD));
}