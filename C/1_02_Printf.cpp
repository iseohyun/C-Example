// * 출력해보기 *
// 아래와 같은 예제를 이용하여, printf문을 자유롭게 표현 할 수 있습니다.
//	%c %C	: 문자 1개
//	%s %S	: 문자열
//	%d %D	: 10진수
//	%i %I	: 10진수
//	%u %U	: 부호 없는 10진수
//	%o %O	: 부호 없는 8진수
//	%x %X	: 부호 없는 16진수
//	%e %E	: 지수표기법
//	%%		: % 부호
//	\'		: '
//	\"		: "
//	\\		: \
//	\b		: 백스페이스
//	\n		: 줄바꿈
//	\r		: 캐리지 리턴
//	\t		: 탭(Tab)

#include <stdio.h>

int main()
{
    // 문자 출력
    printf("> 문자 출력 예제\n");
    printf("%c\n", 'a');		// 한글자 출력하기
    printf("%s\n", "AaBbCcDd");	// 여러글자 출력하기

    // 진법 (10진법/8진법/16진법)
    printf("\n> 진법 출력 예제\n");
    printf("%d\n", 30);			// 10진법 출력
    printf("%o\n", 30);			// 8진법 출력 : 36
    printf("%x\n", 30);			// 16진법 출력 : 1e(소문자) 
    printf("%X\n", 30);			// 16진법 출력 : 1e(대문자)

    // 정수, 소수
    printf("\n> 소수 출력 예제\n");
    printf("%d\n", 3.3);	// 소수를 정수로 출력할 수 없습니다. 의도하지 않은 숫자가 출력됩니다.
    printf("%f\n", 3.3);
    printf("%e\n\n", 0.0000033);
}