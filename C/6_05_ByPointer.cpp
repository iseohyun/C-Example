#include <stdio.h>

// * ����ü������ *
// ����ü �������� ���� ����� ���� Ư���մϴ�.
// ��ü�� �ִ� ����ü�� ��ħǥ(.)�����ڸ� ���ؼ� ������ ����������,
// ��ü�� ���� �����ͱ���ü�� ȭ��ǥ(->)������ ���ؼ� ������ �����մϴ�.

typedef struct {
	int i;
	int j;
	int k;
}STR1;

int main()
{
	STR1 str1 = { 10, 15, 25 };
	STR1* pStr1 = &str1;

	printf("%d\n", str1.i);

	str1.i = 20;
	printf("%d\n", pStr1->i);

	pStr1->i = 30;
	printf("%d\n\n", str1.i);

	printf("%llu, %llu\n", sizeof(str1), sizeof(pStr1));
}