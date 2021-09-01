#include <stdio.h>

// * 전달인자와 반영의 범위 *
// func내부에서 생성된 i는 main에서 생성된 i와 이름만 동일 할 뿐, 전혀 다른 저장공간입니다.
// 따라서, 함수가 종료된 후에 반영되지 않은 결과가 출력됨을 알수 있습니다.

void func(int i)
{
	i = 55;
	printf("%d\n", i);	// 55 반영함
}

void main()
{
	int i = 4;

	func(i);

	printf("%d\n", i); // 반영되지 않은 원래 수
}