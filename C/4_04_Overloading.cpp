#include <stdio.h>

// * �����ε� *
// func1, func2�� ���� �̸��� �츮(���)�� ������ �̸��̰�, ��ǻ�ʹ� �� �̸���� ������ȣ�� �ο��ؼ� �����մϴ�.
// ������ȣ�� �ο��� ��, ����ϴ� ���߿��� ���� ������ Ÿ�԰� ������ ������ �˴ϴ�.
// ����, func1(int)�� func1(char)�� ���� �ٸ� ���ڰ� �Ǵ� ���Դϴ�.
// �����ε��� ���� �̸��� ���� ���ڸ� �ٸ��� �����ϴ� ���� �����ε��̶�� �մϴ�.


void show()
{
	printf("Factor: Nothing\n");
}

void show(int a)
{
	printf("Factor : %d\n", a);
}

void show(char a)
{
	printf("Factor : %c\n", a);
}

void show(double a)
{
	printf("Factor : %lf\n", a);
}

void show(double a, char b)
{
	printf("Factor : %lf, %c\n", a, b);
}

void show(double a, int b)
{
	printf("Factor : %lf, %d\n", a, b);
}

void show(double a, int b, char c)
{
	printf("Factor : %lf, %d, %c\n", a, b, c);
}

void main()
{
	show();
	show(10);
	show('A');
	show(3.14);
	show(2.71, 'B');
	show(9.8, 20);
	show(1.414, 30, 'C');
}