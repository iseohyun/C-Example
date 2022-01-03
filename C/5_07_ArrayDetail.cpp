#include <stdio.h>

// * 배열 *
// 배열은 다음과 같은 문법을 따릅니다 :
//		변수타입 변수이름[변수크기];	// 선언시
//		변수이름[번호]		// 사용시
// 주의사항 :
// 배열의 시작은 0입니다.
// 따라서, "변수이름[변수크기-1]"이 마지막 데이터가 됩니다.

int main()
{
	// 초기화 하는 방법
	int a[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };

	// 초기화가 잘 되었는지 확인해 봅시다.
	for (int i = 0; i < 10; i++)
		printf("a[%d] : %d\n", i, a[i]);

	// 입력하는 방법
	printf("\n======== Input ==========\n");
	for (int i = 0; i < 10; i++)
		a[i] = i + 10;

	// 입력이 잘 되었는지 확인해 봅니다.
	for (int i = 0; i < 10; i++)
		printf("a[%d] : %d\n", i, a[i]);
}