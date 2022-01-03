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

int main()
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

/*
실습과제 :
	function pointer를 이용한 함수를 만들어봅니다.
		void(*fptr)();

	english() 함수는 "Welcome! Nice to meet you."
	korean() 함수는 "환영합니다. 반갑습니다."
	japaness() 함수는 "ようこそ！はじめまして。"
	chinese() 함수는 "歡迎！很高興見到你。" 를 출력합니다.

	fptr을 호출하면, "헬로우."를 출력합니다.

실습과제 2:
	fptr을 호출하면, "안녕하세요."를 출력합니다.

실습과제 3:
	fptr을 호출하면, 돌아가면서 인사말을 출력합니다.

실습과제 4:
	setLanguage함수를 생성합니다.
	setLanguage함수를 이용하여 원하는 언어의 함수를 연결합니다.

void english();
void korean();
void japaness();
void chinese();

void english() {
	printf("Welcome! Nice to meet you.");
}
void korean() {
	printf("환영합니다. 반갑습니다.");
}
void japaness() {
	printf("ようこそ！はじめまして。");
}
void chinese() {
	printf("歡迎！很高興見到你。");
}

*/