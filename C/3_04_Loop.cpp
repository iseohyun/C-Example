#include <stdio.h>

// * 반복문 *
// 반복을 하는 방법은 총 3가지가 있습니다.
// 반복은 판단문이 거짓을 때 까지 진행이 됩니다.
// for문
//		for(초기화;판단문;증감문) { 내용; }
// while문
//		while(판단문) { 내용; }
// do ... while문
//		do { 내용; } while(판단문);
//
// do ... while문은 최소한 1번 실행하는 차이점이 있습니다.

void main()
{
	int i = 10;
	while (--i) {
		printf("while : %d\n", i);
	}

	i = 10;
	do {
		printf("do while: %d\n", i);
	} while (--i);

	for (int j = 0; j < 10; j++) {
		printf("for: %d\n", j);
	}
}