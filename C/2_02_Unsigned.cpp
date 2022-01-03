#include <stdio.h>

// * 부호 *
// 부호비트는 가장 높은 비트(HSB;High Significant Bit <-> 최하위 비트LSB;Least..)를 할애합니다.
// HSB                LSB
// ----------------------
// |**|  |  |  |  |  |  |
// ----------------------
// 하지만, 가끔 부호가 필요없는 변수가 필요할 때도 있습니다.
// 이런 경우 부호없음(Unsigned)으로 선언할 수 있습니다.
// 결과적으로 부호없음으로 선언한 것은 프로그래머(사람)의 입장에서 해석의 차이지,
// 컴퓨터의 입장에서는 연산상에 차이가 없습니다. (2의 보수를 사용하기 때문입니다.)
// 
// 단, 연산상에 차이가 없을 뿐, 부호비트는 유효합니다.
// 부호비트를 인정하는지에 따라 0보다 큰 수가 될 것인지 판단의 근거가 되기 때문에
// 의도에 맞게 사용하는 것이 좋습니다.

int main()
{
	char c = 127;
	unsigned char uc = 127;

	c = c + 1;
	uc = uc + 1;
	printf("Signed : %d / Unsigned : %d\n\n", c, uc);

	// 2의 보수이기 때문에, 연산 결과가 동일합니다.
	int i = 0;
	unsigned int ui = 0;
	i = i - 1;
	ui = ui - 1;
	printf("Signed : %d / Unsigned : %d\n", i, ui);
	printf("Signed : %u / Unsigned : %u\n\n", i, ui);

	// 부호가 중요합니다.
	printf("Signed : %X / Unsigned : %X\n", i, ui);
	printf("i는 %s수입니다.\n", (0 > i) ? "음" : "양");
	printf("ui는 %s수입니다.\n", (0 > ui) ? "음" : "양");
}