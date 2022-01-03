#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// * 인자전달 *
// 인자 전달은 소괄호("()")안에 전달하면 됩니다.
//		[리턴형] 함수이름([전달인자]) { 내용; }
// 호출 방법은 다음과 같습니다.
//		함수이름([전달인자]);
// 인자는 여러개를 전달 할 수 있습니다.

void func(int i)
{
	printf("전달받은 정수 : %d\n\n", i);
}

void func02(float f)
{
	printf("전달받은 소수 : %f\n\n", f);
}

void func03(int a1, int a2, int a3)
{
	printf("첫번째 인자 : %d\n", a1);
	printf("두번째 인자 : %d\n", a2);
	printf("세번째 인자 : %d\n\n", a3);
}
void grade(int x, int y)
{
	printf("%d %d", x, y);
}

int main()
{
	func(3);
	func02(3.3f);
	func03(5, 10, 15);
}

/*
실습과제 :
	함수 이름은 grade라고 합니다.
		srand(time(0));
		grade(rand()%100);
	전달한 점수(=Argument;아규먼트(인자))에 따라 학점을 출력합니다.
	90점대 : A
	80점대 : B
	70점대 : C
	60점대 : D
	60미만 : F
	0~3점 : -
	4~6점 : 0
	7~9점 : +
	예를들어, 97점 -> A+
	72점 -> C-
	F는 +/-가 없습니다. F받은 학생의 마음을 후벼파지 않습니다. F+를 주지 않습니다.

실습과제 2:
	점수를 2개를 전달 받습니다.
	두개 점수의 평균을 계산 한 후에 학점을 줍니다.

실습과제 3:
	점수를 3개를 전달 받습니다.
	3개의 평균 점수를 계산 하여 학점을 줍니다.
	단, 40점 이하의 점수가 하나라도 있다면 과락 F를 줍니다.
*/