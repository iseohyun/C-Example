#include <stdio.h>

// * ����ü���� ����ü *
// ����ü�� �����̵� ���� �� �� �ֽ��ϴ�.
// ����, ����ü�� ����ü�� ���� �� �� �ֽ��ϴ�.

typedef struct {
	int i;
}STR1;

typedef struct {
	STR1 str1;
}STR2;

typedef struct {
	STR2 str2;
}STR3;

int main()
{
	STR3 str3;
	str3.str2.str1.i = 10;
	printf("%d\n", str3.str2.str1.i);
}