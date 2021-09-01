#include <iostream>
#include <stdio.h>
#define max_stack_size 10

int top = -1;
int stack[max_stack_size];

void stackFull(void);
void stackEmpty(void);
void push(int);
int pop(void);

int main()
{
	push(8);
	push(1);
	push(0);
	push(2);

	printf("%2d", pop());
	printf("%2d", pop());
	printf("%2d", pop());
	printf("%2d", pop());

	return 0;
}

void stackFull()
{
	printf("\nStack is full, cannot add element.\n");
	exit(1);
}

void stackEmpty()
{
	printf("\nStack is empty, cannot delete element.\n");
	exit(1);
}

void push(int item)
{									// ���� stack�� item�� ����
	if (top >=/*?????*/max_stack_size)
		stackFull();
	else
		stack[++top] =/*?????*/item;
}

int pop()
{		// ���� stack�� �ֻ��� ���Ҹ� �����ϰ� ��ȯ
	if (top <= /*?????*/-1)
		stackEmpty();
	else
		return stack[/*?????*/top--];
}