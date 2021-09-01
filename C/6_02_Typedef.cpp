#include <stdio.h>

// * typedef�� �̿��� ���� *
// typedef�� �̿��� ��� Ÿ�Ը��� ���� �ڿ� ���� �˴ϴ�.
// typedef�� ����ü�� �ƴѰ�쿡�� ���� �� �ִµ�,
// �ַ� ȸ��(������Ʈ) ������, �ý��ۿ� ���ؼ� int�� ũ�Ⱑ ������ ��찡 �߻��ϱ� ������
// Datatype.h�� �̿��ؼ� �ش� ������ ������ �ϰ� �˴ϴ�.
// Ÿ���� ������ �ؼ� ��� ������ �ý����� ���׷��̵� �Ǿ��� ��, ������ Ÿ���� ���������� �ʾƵ� �ǰ�,
// �ܼ��� Datatype.h�� �����ص� �ǹǷ� �۾�ȿ���� �ſ� ��µ˴ϴ�.

typedef struct {
	int year;
	char month;
	char day;
}DATE;

typedef unsigned char U8;
typedef int S32;
typedef double F64;

int main()
{
	DATE kwangbock = { 1945, 8, 15 };
	U8 a = 10;
	S32 i = -111;
	F64 d = 123456789.123456789;

	printf("������ : %d/%d/%d\n", kwangbock.year, kwangbock.month, kwangbock.day);
	printf("U8 : %d\n", a);
	printf("S32 : %d\n", i);
	printf("F64 : %lf\n", d);
}