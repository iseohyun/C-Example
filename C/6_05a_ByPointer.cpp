// * 구조체포인터 *
// 구조체 포인터의 접근 방식은 조금 특이합니다.
// 실체가 있는 구조체는 마침표(.)연산자를 통해서 접근이 가능하지만,
// 실체가 없는 포인터구조체는 화살표(->)연산을 통해서 접근이 가능합니다.

#include <stdio.h>

typedef struct {
    int i;
    int j;
    int k;
}STR1;

int main()
{
    STR1 str1 = { 10, 15, 25 };
    STR1* pStr1 = &str1;

    printf("%d\n", str1.i);

    str1.i = 20;
    printf("%d\n", pStr1->i);

    pStr1->i = 30;
    printf("%d\n\n", str1.i);

    printf("%llu, %llu\n", sizeof(str1), sizeof(pStr1));
}