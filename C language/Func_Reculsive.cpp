#include <stdio.h>

// * 재귀함수 *
// 자기 자신이, 자기 자신을 호출 하는 함수를 재귀함수라고 합니다.
// 재귀함수는 코드라인을 줄여주지만, 메모리관리의 측면에서 보면 치명적이라고 할 수 있습니다.
// 정교하게 설계하고, 되도록이면 사용하지 않는 것을 권장합니다.

// 1부터 n까지 더하는 함수를 생성합니다.
int rSum(int s)
{
	if (s != 0) {
		printf("Call rSum(%d)\n", s);
		s += rSum(s - 1);
	}

	return s;
}

void main()
{
	printf("resault : %d\n", rSum(10));
}