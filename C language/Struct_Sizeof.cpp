#include <stdio.h>

// * 구조체의 크기 *
// 구조체는 주로 선언되는 순서대로 배치가 됩니다.
// 이때, 32bit(4byte)로 팩킹(포장)이 되는데, 32bit로 포장이 되는 이유는
// 상당히 오랜 시간동안 시중의 컴퓨터가 32bit bus를 사용했기 때문입니다.
// 32bit를 1개의 단어, 즉 word라고 말합니다.
// 컴퓨터가 한번에 처리 할 수 있는 용량에 맞춰서 포장하는 이유는 그래야 처리속도에서 우위를 점할 수 있기 때문입니다.
// 만약에 DATE2의 day가 4byte단위로 잘라지지 않았다고 가정해봅시다.
// 그렇다면 2번에 나누어서 호출이 되고, 호출이 된 후에 다시 처리를 해야합니다.
// 처리가 필요한 이유는 엔디안과 연관이 높으며, 디버깅을 통해서 확인 할 수 있습니다.

typedef struct {
	char  year;
	char month;
	char day;
}DATE;

typedef struct {
	char year;
	char month;
	int day;
}DATE2;

typedef struct {
	char year;
	int month;
	char day;
}DATE3;

int main()
{
	char A[3];
	printf("%d/%d\n", sizeof(A), sizeof(DATE));
	printf("%d/%d\n", sizeof(DATE2), sizeof(DATE3));
}