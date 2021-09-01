#include <stdio.h>

// * Continue/break *
// 반복문에서 Continue문은 실행커서를 닫음중괄호(})까지 이동시키는 효과를 줍니다.
// break문은 현재 중괄호 묶음({})을 빠져나가는 효과가 있습니다.

void main()
{
	for (int i = 0; i < 10; i++) {
		if (i % 3)
			continue;

		printf("continue : %d\n", i);
	}

	for (int i = 0; i < 10; i++) {
		if (i == 5)
			break;

		printf("break : %d\n", i);
	}
}