#include <stdio.h>

// * ��ó���� *
// ���μ����� ó���ϱ� ����, ������ ������ ������ �� �ֽ��ϴ�.
// #define, #ifdef, #inndef, #else, #endif�� ���� ���˴ϴ�.
// 
// ��� Define�� �Ʒ��� ���� �����Ǿ� �ֽ��ϴ�.
// __FILE__	: ���� ���ϸ��� ����մϴ�.
// __LINE__ : ���� �������� ������ ����մϴ�.
// __DATE__ : ���� �ý��� ��¥�� ����մϴ�.
// __TIME__ : ���� �ý��� �ð��� ����մϴ�.

#define PREPROCESS

int main()
{
#ifdef PREPROCESS
	printf("Preprocess defined.\n");
#endif
#undef PREPROCESS
#ifdef PREPROCESS
	printf("Now, Preprocess defined.\n");
#else
	printf("Now, Preprocess NOT defined.\n");
#endif
	printf("%s(%d) - Working!\n", __FILE__, __LINE__);
	printf("TIME : %s %s\n", __DATE__, __TIME__);
}