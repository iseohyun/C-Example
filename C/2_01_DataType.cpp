#include <stdio.h>

// * ������ Ÿ�� *
// ������ Ÿ���̶�, ��ǻ�Ϳ��� �󸶳� ���� ���� ������ ����� �� �̸� �˷��ִ� ����Դϴ�.
// ���� ����� �������� ���� ������ �����ϸ�, ���� �� ���Դϴ�.
// ���� ����� �������� ���� ������ �����ϸ�, �����÷ο�(��ħ ����)�� �߻��� ���Դϴ�.

int main()
{
	char c = 'A';
	int i = 66;
	long l = 99;
	float f = 123456789.;	//warning
	double d = 123456789.987654321;

	printf("char : %c\n", c);
	printf("int : %d\n", i);
	printf("long : %ld\n", l);
	printf("float : %f\n", f);
	printf("double : %lf\n", d);

	printf("char(->int) : %d\n", c);
	printf("int(->char) : %c\n", i);
}