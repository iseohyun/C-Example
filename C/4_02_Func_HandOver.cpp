#include <stdio.h>

// * 인자전달 *
// 인자 전달은 소괄호("()")안에 전달하면 됩니다.
//		[리턴형] 함수이름([전달인자]) { 내용; }
// 호출 방법은 다음과 같습니다.
//		함수이름([전달인자]);
// 인자는 여러개를 전달 할 수 있습니다.

void func(int i)
{
	printf("전달받은 정수 : %d\n\n", i);
}

void func02(float f)
{
	printf("전달받은 소수 : %f\n\n", f);
}

void func03(int a1, int a2, int a3)
{
	printf("첫번째 인자 : %d\n", a1);
	printf("두번째 인자 : %d\n", a2);
	printf("세번째 인자 : %d\n\n", a3);
}

void main()
{
	func(3);
	func02(3.3);
	func03(5, 10, 15);
}