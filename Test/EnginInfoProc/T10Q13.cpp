/*
* 문) 출력결과를 예측하세요.
*/
#include <stdio.h>
int retunc(int i)
{
	printf("%d ", i);
	if (i < 1)
	{
		return 2;
	}
	else
	{
		return (3 * retunc(i - 1) + 1);
	}
}

void main()
{
	int n;
	n = retunc(7);
	printf("\n");
	printf("%d\n", n);
}

//	0 : 3(2)+1 = 7
//	1 : 3(7)+1 = 22
//	2 : 3(22)+1 = 67
//	3 : 3(67)+1 = 202
//	4 : 3(202)+1 = 607
//	5 : 3(607)+1 = 1822
//	6 : 3(1822)+1 = 5467