// * typedef를 이용한 선언 *
// typedef를 이용할 경우 타입명이 가장 뒤에 오게 됩니다.
// typedef는 구조체가 아닌경우에도 사용될 수 있는데,
// 주로 회사(프로젝트) 내에서, 시스템에 의해서 int의 크기가 갈리는 경우가 발생하기 때문에
// Datatype.h를 이용해서 해당 변수를 재정의 하게 됩니다.
// 타입을 재정의 해서 얻는 이점은 시스템이 업그레이드 되었을 때, 일일이 타입을 조정해주지 않아도 되고,
// 단순히 Datatype.h만 수정해도 되므로 작업효율이 매우 상승됩니다.

#include <stdio.h>

typedef struct {
    int year;
    char month;
    char day;
}DATE1;

typedef unsigned char U8;
typedef int S32;
typedef double F64;

int main()
{
    DATE1 kwangbock = { 1945, 8, 15 };
    U8 a = 10;
    S32 i = -111;
    F64 d = 123456789.123456789;

    printf("광복절 : %d/%d/%d\n", kwangbock.year, kwangbock.month, kwangbock.day);
    printf("U8 : %d\n", a);
    printf("S32 : %d\n", i);
    printf("F64 : %lf\n", d);
}