#include <stdio.h>

// * 제어문 *
// 1. 기본 문법은 다음과 같습니다.
//		if (판단문) { 참일 때 내용; }
// 2. 거짓일 때도 실행되도록 할 수 있습니다.
//		if (판단문) { 참; } else { 거짓; }
// 3. 여러개의 판단문을 겹쳐서 사용 할 수도 있습니다.
//		if (판단문) { 참; } else if(판단문2) { 판단문1은거짓, 판단문2는 참; } else { 상위해당 안됨; }
//		if ... else if ... else if ... else if ...

void main()
{
	int input;
	printf("숫자를 입력하세요 : ");
	//scanf("%d", &input);
	scanf_s("%d", &input);

	if (input > 5) {
		printf("입력한 숫자가 5보다 큽니다.\n");
	}
	else if (input < 5) {
		printf("입력한 숫자가 5보다 작습니다.\n");
	}
	else {
		printf("입력한 숫자는 5입니다.\n");
	}
}