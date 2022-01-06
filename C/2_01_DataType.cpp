#include <stdio.h>
/*
* 데이터 타입
* 
* 강의자료 : https://example-code.tistory.com/entry/%EB%B3%80%EC%88%98-%EC%84%A0%EC%96%B8%ED%95%98%EA%B8%B0
* 
*	데이터 타입이란, 컴퓨터에게 얼마나 많은 저장 공간을 사용할 지 미리 알려주는 기능입니다.
* 내가 사용할 공간보다 많은 공간을 설정하면, 낭비가 될 것입니다.
* 내가 사용할 공간보다 적은 공간을 설정하면, 오버플로우(넘침 오류)가 발생할 것입니다.
* 
*/

int main()
{
	char c = 'A';
	int i = 66;
	long l = 99;
	float f = 123456789.;	//warning
	double d = 123456789.987654321;

	printf("char : %c\n", c);
	printf("int : %d\n", i);
	printf("long : %ld\n", l);
	printf("float : %f\n", f);
	printf("double : %lf\n", d);

	printf("char(->int) : %d\n", c);
	printf("int(->char) : %c\n", i);
}