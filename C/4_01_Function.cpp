#include <stdio.h>

// * 함수 *
// 함수는 기능을 분리하는 역할을 합니다.
// 함수의 문법은 다음과 같습니다.
//		[리턴형] 함수이름() { 내용; }
// 호출 방법은 다음과 같습니다.
//		함수이름();

void func()
{
	printf("Hello~\n");
}

int main()
{
	func();
}

/*
실습과제 :
	함수이름은 korean, 함수내용은 "어서오세요."을 출력합니다.
	함수이름은 English, 함수내용은 "웰 컴."을 출력합니다.
	함수이름은 japaness, 함수내용은 "이랏샤이마세~"를 출력합니다.

*/