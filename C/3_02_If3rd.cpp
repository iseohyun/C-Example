#include <stdio.h>

// * 3항연산자 *
// if문과 같은 효과를 내는 연산자를 3항연산자라고 합니다.
// 문법은 다음과 같습니다.
//		(판단문)?참:거짓;

void main()
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