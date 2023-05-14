

#include <stdio.h>

typedef struct
{
    int i;
    int j;
} STR1;

void func1(STR1 str1)
{
    str1.i++;
}

void func2(STR1 *str1)
{
    str1->j += 2;
}

void func3(STR1 &str1)
{
    str1.i += 3;
}

int main()
{
    STR1 str1 = {10, 20};
    printf("0] i=%d, j=%d\n", str1.i, str1.j); // 0] 수정 전
    func1(str1);
    printf("1] i=%d, j=%d\n", str1.i, str1.j); // 1] func1 호출 후
    func2(&str1);
    printf("2] i=%d, j=%d\n", str1.i, str1.j); // 2] func2 호출 후
    func3(str1);
    printf("3] i=%d, j=%d\n", str1.i, str1.j); // 3] func3 호출 후
}