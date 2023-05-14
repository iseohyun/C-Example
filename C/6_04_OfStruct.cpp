// * 구조체속의 구조체 *
// 구조체는 무엇이든 포함 할 수 있습니다.
// 따라서, 구조체는 구조체도 포함 할 수 있습니다.

#include <stdio.h>

typedef struct {
    int i;
}STR1;

typedef struct {
    STR1 str1;
}STR2;

typedef struct {
    STR2 str2;
}STR3;

int main()
{
    STR3 str3;
    str3.str2.str1.i = 10;
    printf("%d\n", str3.str2.str1.i);
}