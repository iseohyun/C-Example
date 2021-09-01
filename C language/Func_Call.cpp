#include <stdio.h>

// * 호출순서 *
// 함수는 먼저 호출 되면, 하던 일을 멈추고,
// 호출 된 함수를 수행 한 뒤
// 호출 된 함수가 끝나면, 남은 일을 마저 합니다.

void func2()
{
	printf("Beautiful\n"); // 2
}

void func()
{
	printf("Hello~\n");	// 1
	func2();
	printf("World!\n"); // 3
}

void main()
{
	func();
}