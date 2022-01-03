#include <stdio.h>

// * ��� ���� *
// ���� �Ǵ� ������ ���� ��쿡 "�� ���� ����(Call By Value)"
// ���� �Ǵ� ������ �ּ��� ��쿡 "�� ���� ���۷���(Call By Reference)"
// int&�� ���� ���� �Ǵ� ���� C++�� �߰��� ����������, ������ �����ϱ� ������ �߰��Ͽ���.
// Call By Address��� �θ���.

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