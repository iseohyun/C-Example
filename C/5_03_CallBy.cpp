#include <stdio.h>

// * 용어 정리 *
// 전달 되는 변수가 값인 경우에 "콜 바이 벨류(Call By Value)"
// 전달 되는 변수가 주소인 경우에 "콜 바이 레퍼런스(Call By Reference)"
// int&에 의해 전달 되는 값은 C++언어에 추가된 개념이지만, 사용법이 간단하기 때문에 추가하였다.
// Call By Address라고 부른다.

void callbyRef(int*);
void callbyValue(int);
void callByAddr(int&);

int main()
{
	int i = 100, j = 200, k = 300;
	int* p = &j;
	printf("i = [%d], *p = [%d], k =[%d]\n", i, *p, k);

	callbyRef(p);
	callbyValue(i);
	callByAddr(k);

	printf("i = [%d], *p = [%d], k =[%d]\n", i, *p, k);

	callbyValue(*p);
	callbyRef(&i);
	callByAddr(k);

	printf("i = [%d], *p = [%d], k =[%d]\n", i, *p, k);
}

void callbyRef(int* p)
{
	*p += 5;
	printf("- Call By Ref : %d\n", *p);
}

void callbyValue(int i)
{
	i += 7;
	printf("- Call By Value : %d\n", i);
}

void callByAddr(int& k)
{
	k += 9;
	printf("- Call By Address : %d\n", k);
}