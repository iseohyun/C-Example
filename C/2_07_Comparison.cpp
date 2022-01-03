#include <stdio.h>

// * 비교연산 *
// 앞으로 배울 판단문에서 사용할 내용입니다.
// 특히 주의할 것은, 같은가?(==)가 등호(=)가 2개임을 주의합니다.
//    등호(=)가 한개이면, 대입연산이 되므로, 이와 구분하기 위해서 2개를 쓰는 것입니다.
// 두번 째, 주의 할 것은, "같지 않다."에서 느낌표(!)를 사용한다는 것입니다.
//    느낌표(!)는 아니다(NOT)을 의미합니다.
//    맞다(true)는 아니다(NOT)가 아닌것을 의미합니다.
//    아니다(NOT)는 숫자로(0,NULL:없다)를 의미합니다.
//    따라서, "맞다"는 0이 아닌 모든 숫자가 됩니다.
//    참고로, "맞다"의 대표는 1입니다.

int main()
{
	int i = 10;
	int j = 15;

	printf("i >  j = %d\n", i > j);
	printf("i <= j = %d\n", i <= j);
	printf("i == j = %d\n", i == j);
	printf("i != j = %d\n", i != j);
	printf("!i     = %d\n", !i);
	printf("!0     = %d\n", !0);

}

/*
	실습과제 1:
		scanf_s("%d", &x);
		입력받은 수가 19 이하이면 0, 20 이상이면 1이 출력되게 하세요.

	실습과제 2:
		scanf_s("%d", &y);
		입력받은 수가 64 이하이면 0, 65 이상이면 1이 출력되게 하세요.

	실습과제 3:
		scanf_s("%c", &y);
		입력받은 문자가 's'이면 1, 's'가 아니면 0이 출력되게 하세요.

*/