#include <stdio.h>

// * ����Լ� *
// �ڱ� �ڽ���, �ڱ� �ڽ��� ȣ�� �ϴ� �Լ��� ����Լ���� �մϴ�.
// ����Լ��� �ڵ������ �ٿ�������, �޸𸮰����� ���鿡�� ���� ġ�����̶�� �� �� �ֽ��ϴ�.
// �����ϰ� �����ϰ�, �ǵ����̸� ������� �ʴ� ���� �����մϴ�.

// 1���� n���� ���ϴ� �Լ��� �����մϴ�.
int rSum(int s)
{
	if (s != 0) {
		printf("Call rSum(%d)\n", s);
		s += rSum(s - 1);
	}

	return s;
}

int main()
{
	printf("resault : %d\n", rSum(10));
}

/*
�ǽ����� :
	�Ʒ� �Լ��� �̿��Ͽ�, �ִ����� / ���丮�� / �Ǻ���ġ �Լ��� ������ ������.

	static int func1(int n) {
		if (n == 1)
			return 1;
		else
			return n * func1(n - 1);
	}

	static int func2(int p, int q) {
		if (q == 0)
			return p;
		else
			return func2(q, p % q);

	}

	static int func3(int n) {
		if (n < 2)
			return n;
		else
			return func3(n - 1) + func3(n - 2);
	}
*/