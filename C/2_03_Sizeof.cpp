#include <stdio.h>

// * 저장공간의 크기 *
// 각 저장공간의 크기를 프로그램을 통해서 알아낼 수 있습니다.
// 문법은 다음과 같습니다.
//		sizeof(알고자 하는 변수 또는 타입)

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