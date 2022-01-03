#include <stdio.h>

#define _USE_MATH_DEFINES
#include <math.h>

// * 리턴 *
// 리턴은 함수가 어떤 변수를 반환할지 결장하는 구문입니다.
// void는 없음을 의미하는 '자료형'입니다.
// int, double, char등 다른 자료형을 사용할 수 있습니다.
// 리턴은 전달인자처럼 여러개를 설정 할 수 없습니다.
// 단 한개의 리턴만 가능합니다.
//


int func01()
{
	return 999;
}

int main()
{
	int i;
	
	i = func01();

	printf("변수에 받아서 출력 : %d\n", i);
	printf("직접 출력 : %d\n", func01());
}

/*
실습과제 1:
	입력한 숫자의 2배를 반환하는 숫자를 돌려받습니다.

실습과제 2:
	포물선으로 포탄을 발사합니다.
	포탄은 일정한 장약(폭발물)을 가지고 있습니다. 따라서 초기 속도는 언제나 20m/s로 일정 합니다.
	공기 저항은 무시합니다.
	중력가속도는 10m/s로 일정합니다.
	예를 들면, 포탄을 위쪽으로 발사했을 때 총 비행 시간은 4초 입니다.
	4초 동안 포탄의 x축 비행속도를 구하면, 낙하 거리를 구할 수 있습니다.
	45도로 발사 했을 때, 낙하거리를 구해봅니다.

	참고 : https://www.desmos.com/calculator/nmiymdpxhf

실습과제 3:
	double x = sin((angle/180) * M_PI);
	double y = cos((angle/180) * M_PI);

	총 비행시간을 구하는 함수를 구합니다.
	x축 비행속도를 구하는 함수를 만듭니다.
	총 비행거리를 구하는 함수를 만듭니다.

	참고 : https://example-code.tistory.com/entry/%ED%8F%AC%ED%83%84-%EA%B7%B8%EB%9E%98%ED%94%84-%EC%BD%94%EB%94%A9%ED%95%98%EA%B8%B0
*/