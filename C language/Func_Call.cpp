#include <stdio.h>

// * ȣ����� *
// �Լ��� ���� ȣ�� �Ǹ�, �ϴ� ���� ���߰�,
// ȣ�� �� �Լ��� ���� �� ��
// ȣ�� �� �Լ��� ������, ���� ���� ���� �մϴ�.

void func2()
{
	printf("Beautiful\n"); // 2
}

void func()
{
	printf("Hello~\n");	// 1
	func2();
	printf("World!\n"); // 3
}

void main()
{
	func();
}