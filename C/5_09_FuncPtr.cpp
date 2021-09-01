#include <stdio.h>

// * Function Pointer *
// 데이터의 주소를 포인터라고 했는데,
// 함수도 명령어(데이터)의 모임이라고 했습니다.
// 데이터는 당연히 주소를 가지고 있으니,
// 함수도 포인터로 표현이 가능합니다.
// 
// 문법은 아래와 같습니다 :
//		리턴타입 (*포인터명)(전달인자);	// 선언시
//		포인터명(전달인자);	// 사용시
// 
// 부록: 정확히 이야기하자면, 함수를 호출하는데 일정한 형식이 필요합니다. 함수 포인터로 지정이 되면,
//		함수 포인터는 여타의 포인터를 저장하는 방식으로 저장하고 있다가, 해당지역으로 jump하는 방식으로 동작합니다.

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int dev(int a, int b);

void main()
{
	int i = 20, j = 10;
	int(*ptrFunc)(int, int) = add;
	printf("add : %d\n", ptrFunc(i, j));
	ptrFunc = sub;
	printf("sub : %d\n", ptrFunc(i, j));
	ptrFunc = mul;
	printf("mul : %d\n", ptrFunc(i, j));
	ptrFunc = dev;
	printf("dev : %d\n", ptrFunc(i, j));
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int dev(int a, int b)
{
	return a / b;
}