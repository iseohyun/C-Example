#include <stdio.h>

// * 구조체 예제2 *
// 구조체 안에, 얼마든지 구조체를 넣을 수 있고, 
// 참조 방식은 마침표(.)를 연속해서 사용하면 됩니다.
// 예제를 이용해서 4를 출력해 봅시다.

struct ST_A1 {
	char a1;
	char a2;
};

struct ST_A2 {
	char a1;
	char a2;
	int a3;
};

struct ST_B {
	ST_A1 st_a1;
	ST_A2 st_a2;
};

int main()
{
	ST_B st_b = { {1, 2}, {3, 4, 5} };
	printf("st_b.st_a1[a1,a2] = %d, %d\n", st_b.st_a1.a1, st_b.st_a1.a2);
	printf("st_b.st_a1[a1,a2, a3] = %d, %d, %d\n", st_b.st_a2.a1, st_b.st_a2.a2, st_b.st_a2.a3);
	printf("SizeOf [B:%llu / A1:%llu / A2:%llu]\n", sizeof(st_b), sizeof(st_b.st_a1), sizeof(st_b.st_a2));
}