/*
* 결과 값이 다음과 같이 되도록 빈칸을 채우시오.
* > 1 2 4 7
*/

#include <stdio.h>
#define SIZE 4

void bubble_sort(int* list)
{
	int i, j, temp;
	for (i = 0; i < SIZE - 1; i++) {
		for (j = 0; j < (SIZE - 1) - i; j++) {
			if (/*?????*/list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < SIZE; i++)
		printf("%d ", /**1**/);
}

void main()
{
	int list[SIZE] = { 7, 2, 4, 1 };
	/**2**/;
}