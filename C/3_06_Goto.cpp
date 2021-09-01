#include <stdio.h>

// * Goto문 *
// Goto문은 제어문과 상관 없이 원하는 루틴으로 갈 수 있는 명령어 입니다.
// 매우 강력크한 만큼, 제어가 꼬일 수 있는 가능성도 매우 높기 때문에,
// 전통적으로 추천하지 않는 제어문 중에 하나 입니다.
// 하지만 부분적으로 매우 요긴하게 쓰이고 있습니다.

void main()
{
	printf("실행중인 라인 : %d\n", __LINE__);
	goto LabelA;
	printf("실행중인 라인 : %d\n", __LINE__);
LabelA:
	printf("실행중인 라인 : %d\n", __LINE__);
}