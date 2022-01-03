#include <stdio.h>

// * 3항연산자 *
// if문과 같은 효과를 내는 연산자를 3항연산자라고 합니다.
// 문법은 다음과 같습니다.
//		(판단문)?참:거짓;

int main()
{
	int i = 5;
	int j = 7;

	// 3항 연산자
	int resault = (i > j) ? i : j;
	printf("Max : %d\n", resault);
	
	// if문 사용 (같은 결과)
	if (i > j) {
		resault = i;
		printf("If : %d\n", resault);
	}
	else {
		resault = j;
		printf("If : %d\n", resault);
	}
}

/*
실습과제 1:
	3항 연산자를 이용하여, 입력한 문자가 'm'이면 "남성", 그렇지 않은 경우 "여성"을 입력합니다.
		char s;
		scanf_s("%c", &s);

실습과제 2:
	3항 연산자를 이용하여, 입력한 숫자가 7보다 크면, 7을 7보다 작으면 입력한 숫자를 출력하세요.

실습과제 3:
	3항 연산자를 이용하여, 입력한 숫자가 10보다 작으면 음수로, 10보다 크면 양수로 출력하세요.
*/