#include <stdio.h>

// * Function Pointer *
// �������� �ּҸ� �����Ͷ�� �ߴµ�,
// �Լ��� ��ɾ�(������)�� �����̶�� �߽��ϴ�.
// �����ʹ� �翬�� �ּҸ� ������ ������,
// �Լ��� �����ͷ� ǥ���� �����մϴ�.
// 
// ������ �Ʒ��� �����ϴ� :
//		����Ÿ�� (*�����͸�)(��������);	// �����
//		�����͸�(��������);	// ����
// 
// �η�: ��Ȯ�� �̾߱����ڸ�, �Լ��� ȣ���ϴµ� ������ ������ �ʿ��մϴ�. �Լ� �����ͷ� ������ �Ǹ�,
//		�Լ� �����ʹ� ��Ÿ�� �����͸� �����ϴ� ������� �����ϰ� �ִٰ�, �ش��������� jump�ϴ� ������� �����մϴ�.

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int dev(int a, int b);

void main()
{
	int i = 20, j = 10;
	int(*ptrFunc)(int, int) = add;
	printf("add : %d\n", ptrFunc(i, j));
	ptrFunc = sub;
	printf("sub : %d\n", ptrFunc(i, j));
	ptrFunc = mul;
	printf("mul : %d\n", ptrFunc(i, j));
	ptrFunc = dev;
	printf("dev : %d\n", ptrFunc(i, j));
}

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int dev(int a, int b)
{
	return a / b;
}