#include <stdio.h>

// * 포인터로 인자 전달하기 *
// 포인터로 인자를 전달하면, 전달받은 인자는 결과가 항상 반영되어 있습니다.
// 따라서, 함수로 반환을 받아야 하는 번거로움이 사라집니다.
// 게다가, 반환받은 함수를 저장해야하는 번거로움이 사라집니다.

void func(int a, int* b, int& c)
{
	a = a + 10;
	*b = *b + 10;
	c = c + 10;
}

int main()
{
	int x = 11, y = 12, z = 13;
	printf("(x, y, z) = (%d, %d, %d)\n", x, y, z);

	func(x, &y, z);
	printf("(x, y, z) = (%d, %d, %d)\n", x, y, z);

	func(x, &y, z);
	printf("(x, y, z) = (%d, %d, %d)\n", x, y, z);
}