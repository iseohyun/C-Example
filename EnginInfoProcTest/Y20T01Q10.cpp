/*
* 결과를 작성하시오.
*/

#include <stdio.h>
int main()
{
	int a[] = { 95, 75, 85, 100, 50 };
	int i, j, temp;
	int n = sizeof(a) / sizeof(int); // int n = 5 ;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < 4 - i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}