// * 증감연산 *
// +1, -1을 가장 간편하게 하는 방법입니다.
// 단, 선행연산자와 후행연산자가 있는데,
// 선행연산자는 최고 우선순위를 갖고 실행
// 후행연산자는 상당히 낮은 우선순위(다른 연산자 처리 후)로
//		실행하는 것이 차이점입니다.

#include <stdio.h>

int main()
{
    int i = 10;

    // 선행연산자 테스트
    // 증가
    printf("[ 실행 전 ] %i\n", i);
    printf("[   ++i   ] %i\n", ++i);
    printf("[ 실행 후 ] %i\n\n", i);
    // 감소
    printf("[ 실행 전 ] %i\n", i);
    printf("[   --i   ] %i\n", --i);
    printf("[ 실행 후 ] %i\n\n", i);

    // 후행연산자 테스트
    printf("[ 실행 전 ] %i\n", i);
    printf("[   i--   ] %i\n", i--);
    printf("[ 실행 후 ] %i\n\n", i);
}

/*
실습과제 1
    아래 코드를 각각 비교해 봅니다.
    i = i + 1;
    i += 1;
    i++;
    ++i;

실습과제 2
    아래 코드를 비교해봅니다.
    print(i++);
    print(i++);
    print(i++);
    print(i++);
    print(i++);

    print(++i);
    print(++i);
    print(++i);
    print(++i);
    print(++i);
*/