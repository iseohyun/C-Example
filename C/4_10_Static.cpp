#include <stdio.h>

// * static 변수 *
// static 키워드를 사용한 변수는 중괄호({})를 벗어나더라도 소멸되지 않습니다.
// 그 이유는 해당 키워드로 인해 호출되는 위치가 stack이 아니기 때문입니다.
// 함수의 소멸과 상관없이 변수를 유지하고자 할 때 사용할 수 있습니다.

void func01()
{
	int i = 0;
	i++;
	printf("호출 된 횟수 : %d\n", i);
}

void func02()
{
	static int i = 0;
	i++;
	printf("호출 된 횟수 : %d\n", i);
}

int main()
{
	printf(" > Static 사용 안함\n");
	for (int i = 0; i < 10; i++)
		func01();

	printf(" > Static 사용 함\n");
	for (int i = 0; i < 10; i++)
		func02();
}

/*
실습과제 : 
	함수 X()를 생성합니다.
	'x'를 호출된 횟수만큼 출력합니다.
	x가 4번 출력하면 띄어쓰기를 합니다.
	X()를 10번 호출 합니다.

	출력 예)
		x
		xx
		xxx
		xxxx
		xxxx x
		xxxx xx
		xxxx xxx
		xxxx xxxx
		xxxx xxxx x
		xxxx xxxx xx

실습과제 :
	입력을 받습니다.
	입력받은 함수를 출력하는 함수 Pressed(char c) 를 호출합니다.
	c가 알파벳이면 "[문자]가 입력되었습니다."를 출력 합니다.
	만약, 이전에 입력되었던 문자라면, "같은 문자가 입력되었습니다."를 출력합니다.
*/