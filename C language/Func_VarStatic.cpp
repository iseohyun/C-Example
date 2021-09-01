#include <stdio.h>

// * static 변수 *
// static 키워드를 사용한 변수는 중괄호({})를 벗어나더라도 소멸되지 않습니다.
// 그 이유는 해당 키워드로 인해 호출되는 위치가 stack이 아니기 때문입니다.
// 함수의 소멸과 상관없이 변수를 유지하고자 할 때 사용할 수 있습니다.

void func01()
{
	int i = 0;
	i++;
	printf("호출 된 횟수 : %d\n", i);
}

void func02()
{
	static int i = 0;
	i++;
	printf("호출 된 횟수 : %d\n", i);
}

void main()
{
	printf(" > Static 사용 안함\n");
	for (int i = 0; i < 10; i++)
		func01();

	printf(" > Static 사용 함\n");
	for (int i = 0; i < 10; i++)
		func02();
}