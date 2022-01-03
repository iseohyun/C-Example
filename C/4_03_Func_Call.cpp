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

int main()
{
	func();
}

/*

실습과제 1:
	로또 번호를 랜덤으로 발생시켜줍니다.
	함수이름은 "rand45"입니다. 함수내용은 1부터 45사이의 숫자를 출력합니다.

실습과제 2:
	lotto함수를 제작합니다.
	lotto함수는 	rand45를 6번 반복하여 출력합니다.

*/