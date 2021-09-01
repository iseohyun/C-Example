#include <stdio.h>

// * 프로토타입 *
// 프로토 타입은 컴퓨터에게 내가 컴파일할 프로그램에게 어떠한 함수가 있는지 미리 알려주는 기능을 합니다.
// 컴퓨터는 아직 등장하지 않은 함수가 나중에 나올 것이다. 라는 확신을 갖고 에러를 발생하지 않고 진행합니다.
// 문법은 다음과 같습니다. (내용이 없이 세미콜론(;)으로 마무리 한다는 것에 주의하세요)
//		[리턴형] 함수이름([전달인자]);
// 인자 이름은 넣어도 되고 넣지 않아도 됩니다.

void func();
void func02(int, int);	// 결과는 같습니다 : void func02(int a, int b);

void main()
{
	func();
	func02(3, 5);
}

void func()
{
	printf("function 01 : \n");
}

void func02(int a, int b)
{
	printf("function 02 : %d, %d\n", a, b);
}