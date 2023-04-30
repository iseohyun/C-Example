// * Switch문 *
// if문을 길게 나열하는 것을 switch문을 이용하면 가독성에 도움이 됩니다.
// 문법은 다음과 같습니다.
//		switch(변수) {
//			case 숫자: 명령; break;
//			case 숫자: 명령; ....
//			default: 명령;
//		}

#include <stdio.h>

int main()
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

/*
실습과제 :
	4를 입력했을 때, 오류가 출력되지 않도록 하시오.

실습과제 1:
	입력한 숫자가 5이면 "하나!"를 출력합니다.

실습과제 2:
	입력한 숫자가 6이면 "헛 둘"을 출력합니다.

실습과제 3:
	입력한 문자가 A이면 "왼쪽"
	S이면 "아래쪽"
	D이면 "오른쪽"
	W이면 "위쪽"
	이 출력되도록 하세요.

실습과제 4:
	입력한 숫자가 Q이면 "구르기"
	입력한 숫자가 E이면 "인벤토리"
	입력한 숫자가 1이면 "1번 무기 장착"
	입력한 숫자가 2이면 "2번 무기 장착"
	입력한 숫자가 3이면 "3번 무기 장착"
	입력한 숫자가 4이면 "4번 무기 장착"
	이 출력 되게 하세요.

실습과제 5:
	소문자가 입력되면 움직이지 않는 버그가 발생되었습니다.
	소문자가 입력되더라도 움직일 수 있도록 버그를 수정해 주세요.

실습과제 6:
	쉬프트를 누른 상태에서 1을을 누르면 무기 버리기를 합니다.
	무기를 버리면 1을 눌렀을 때, 무기가 없습니다.를 출력합니다.
*/