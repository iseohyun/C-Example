#include <stdio.h>

// * 오버로딩 *
// func1, func2와 같은 이름은 우리(사람)이 느끼는 이름이고, 컴퓨터는 각 이름대신 고유번호를 부여해서 구별합니다.
// 고유번호를 부여할 때, 사용하는 것중에는 전달 인자의 타입과 갯수도 포함이 됩니다.
// 따라서, func1(int)와 func1(char)는 전혀 다른 인자가 되는 것입니다.
// 오버로딩은 같은 이름에 전달 인자만 다르게 구성하는 것을 오버로딩이라고 합니다.


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