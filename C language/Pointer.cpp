#include <stdio.h>

// * 포인터 *
// 포인터는 C의 가장 강력크한 무기입니다.
// 포인터는 주소입니다.
// 포인터를 이용하여, 변수에 직접 접근하지 않고도 변수를 제어 할 수 있습니다.
// 포인터는 선언시와 불러올 때 문법이 다릅니다.
// 선언할 때
//		변수타입*	변수명;
// 불러올 때
//		저장 할 변수 = &변수;
// 추가> 포인터 변수는 아주 위험한 물질입니다. 따라서, 코딩시에 변수명에 포인터임을 알려주기 위해서 p를 붙이는 편입니다.
//		만약 모르는 개발자가 보더라도, 아. 이것은 포인터구나 하고 알 수 있게 말입니다.

void main()
{
	int A = 10;
	int* pA = &A;

	printf("A = %d\n", A);

	*pA = 15;
	printf("A = %d\n", A);

	// 디버거를 이용하여, 실제 변수가 증가함을 관찰해 봅시다.
	++(*pA);
	++(*pA);
	++(*pA);
	++(*pA);
	++(*pA);
}