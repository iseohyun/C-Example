#include <stdio.h>

// * Switch문 *
// if문을 길게 나열하는 것을 switch문을 이용하면 가독성에 도움이 됩니다.
// 문법은 다음과 같습니다.
//		switch(변수) {
//			case 숫자: 명령; break;
//			case 숫자: 명령; ....
//			default: 명령;
//		}

void main()
{
	int input;
	printf("[1 ~ 4] 사이의 숫자를 입력하세요 : ");
	//scanf("%d", &input);
	scanf_s("%d", &input);

	switch (input)
	{
	case 1:
		printf("하나!\n");
		break;
	case 2:
		printf("둘\n");
		break;
	case 3:
		printf("셋\n");
		break;
	case 4:
		printf("야!\n");

	default:
		printf("오류! 오류!\n");
		break;
	}
}