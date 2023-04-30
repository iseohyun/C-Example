#include <stdio.h>
#include <time.h>

int main()
{
	clock_t start, end;
	double time_taken;
	const long long loop = 1000000000;
	long long i;
	char c;

	// 시간 측정 A
	start = clock();
	i = loop;
	while (i--)
	{
		if (i & 1)
		{
			c = 'A';
		}
		else
		{
			c = 'B';
		}
	}
	end = clock();

	time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("시간 측정 A: %lf 초\n", time_taken);

	// 시간 측정 B
	char g[2] = {'A', 'B'}; // "AB" 문자열을 사용하지 않고, 배열을 직접 초기화합니다.

	start = clock();
	i = loop;
	while (i--)
	{
		c = g[i & 1]; // 비트 AND 연산을 사용하여 2로 나누는 연산을 대체합니다.
	}
	end = clock();

	time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
	printf("시간 측정 B: %lf 초\n", time_taken);

	return 0;
}
