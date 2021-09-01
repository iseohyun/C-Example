#include <stdio.h>

// * 리턴 *
// 리턴은 함수가 어떤 변수를 반환할지 결장하는 구문입니다.
// void는 없음을 의미하는 '자료형'입니다.
// int, double, char등 다른 자료형을 사용할 수 있습니다.
// 리턴은 전달인자처럼 여러개를 설정 할 수 없습니다.
// 단 한개의 리턴만 가능합니다.
//


int func01()
{
	return 999;
}

void main()
{
	int i;

	i = func01();

	printf("변수에 받아서 출력 : %d\n", i);
	printf("직접 출력 : %d\n", func01());
}