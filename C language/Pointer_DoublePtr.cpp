#include <stdio.h>

// * 더블 포인터 *
// 포인터도 어쨌든 주소를 저장하는 "공간"이라고 했으므로,
// 해당 "공간"도 주소를 갖고 있을 것입니다.
// 더블 포인터는, 주소를 저장한 "공간"을 가르키는 주소가 됩니다.
// 
// 포인터를 잘 이해하기 위해서는, 포인터라는 것이 특별하다는 생각을 버려야 합니다.
// 포인터도 결국은 데이터 입니다.

void main()
{
	int i = 10;
	int* pI = &i;
	int** ppI = &pI;
	int*** pppI = &ppI;
	int**** ppppI = &pppI;

	printf("Before : %d\n", i);
	****ppppI = 20;
	printf("After  : %d\n", i);
}