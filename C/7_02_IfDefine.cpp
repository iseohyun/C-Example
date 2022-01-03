#include <stdio.h>

// * 전처리기 *
// 프로세스를 처리하기 전에, 실행할 라인을 지정할 수 있습니다.
// #define, #ifdef, #inndef, #else, #endif와 같이 사용됩니다.
// 
// 몇개의 Define은 아래와 같이 지정되어 있습니다.
// __FILE__	: 현재 파일명을 출력합니다.
// __LINE__ : 현재 수행중인 라인을 출력합니다.
// __DATE__ : 현재 시스템 날짜를 출력합니다.
// __TIME__ : 현재 시스템 시각을 출력합니다.

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