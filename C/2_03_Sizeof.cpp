#include <stdio.h>

// * ��������� ũ�� *
// �� ��������� ũ�⸦ ���α׷��� ���ؼ� �˾Ƴ� �� �ֽ��ϴ�.
// ������ ������ �����ϴ�.
//		sizeof(�˰��� �ϴ� ���� �Ǵ� Ÿ��)

int main()
{
	char c;
	unsigned char uc;
	int i;
	unsigned int ui;
	long l;
	long long ll;
	float f;
	double d;

	printf("char\t\t: %llu / %llu\n", sizeof(c), sizeof(char));
	printf("unsigned char\t: %llu\n", sizeof(uc));
	printf("int\t\t: %llu\n", sizeof(i));
	printf("unsinged int\t: %llu\n", sizeof(ui));
	printf("long\t\t: %llu\n", sizeof(l));
	printf("long long\t: %llu\n", sizeof(ll));
	printf("float\t\t: %llu\n", sizeof(f));
	printf("double\t\t: %llu\n", sizeof(d));
}