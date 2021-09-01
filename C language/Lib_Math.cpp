#include <stdio.h>

// * 수학계산 *
// 자주사용하는 함수의 경우 기본적으로 제공되는 라이브러리를 이용하여, 개발 효율성을 획기적으로 올릴 수 있습니다.

// M_PI, M_E를 사용하기 위해서 #define이 필요합니다.
#define _USE_MATH_DEFINES
#include <math.h>
#include <stdlib.h>

void main()
{
	// math.h를 이용한 수학계산
	printf("절대값\t|-7|\t: %d\n", abs(-7));
	printf("제곱근\tRoot 5\t: %lf\n", sqrt(5));
	printf("삼각\tSin(30)\t: %lf\n", sin(30. / 180 * M_PI));
	printf("역삼각\tCos-1\t: %lf\n", acos(0.5) / M_PI * 180);
	printf("Exp\te^2\t: %lf\n", exp(2));
	printf("지수\te^2\t: %lf\n", pow(M_E, 2));
	printf("로그\tlog2(9)\t: %lf\n", log2(9));
	printf("내림\tfloor()\t: %lf\n\n", floor(1.9));

	// stdlib.h를 이용한 랜덤 10개 받아보기
	printf("랜덤수 : ");
	for (int i = 0; i < 10; i++) {
		printf("%d, ", rand());
	}
}