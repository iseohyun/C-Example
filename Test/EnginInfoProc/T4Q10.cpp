/*
* 문) 출력 결과를 예측하세요.
*/
#include <stdio.h>

int main()
{
	int a[] = { 95, 75, 85, 100, 50 };
	int i, j, temp;
	int n = sizeof(a) / sizeof(int);	//int n = 5;

	for (i = 0; i < n - 1; i++) {
		for (j =/*?????*/i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				/*?????*/a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}