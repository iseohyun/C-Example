#include <stdio.h>

// * ��������� ũ�� *
// �� ��������� ũ�⸦ ���α׷��� ���ؼ� �˾Ƴ� �� �ֽ��ϴ�.
// ������ ������ �����ϴ�.
//		sizeof(�˰��� �ϴ� ���� �Ǵ� Ÿ��)

void main()
{
	char c;
	unsigned char uc;
	int i;
	unsigned int ui;
	float f;
	double d;

	printf("char\t\t: %d / %d\n", sizeof(c), sizeof(char));
	printf("unsigned char\t: %d\n", sizeof(uc));
	printf("int\t\t: %d\n", sizeof(i));
	printf("unsinged int\t: %d\n", sizeof(ui));
	printf("float\t\t: %d\n", sizeof(f));
	printf("double\t\t: %d\n", sizeof(d));
}