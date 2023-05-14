// * 포인터의 증가/감소 *
// 변수라는 것이 정보를 담는 "공간"이 듯
// 포인터라는 것도 결국은 주소를 담는 "공간"이라 할 수 있습니다.
// 주소의 대상이 어떻게 되든, 결과적으로 "주소"라는 것은 일정한 크기를 갖을 수 밖에 없습니다. 4byte
// 단,
// 주소의 연산과정에는 대상의 크기가 얼마인가에 따라서, 증감되는 크기가 결정이 됩니다.
// 대상이 4byte이면 증감도 4byte단위로 증감됩니다.

#include <stdio.h>

int main()
{
    char c;
    int i;
    double d;
    char* pC = &c;
    int* pI = &i;
    double* pD = &d;

    printf("DataType |        +0        |        +1        |        +2        |        +3\n");
    printf("Char(%d)  | %p | %p | %p | %p\n", (int)sizeof(char), pC, pC + 1, pC + 2, pC + 3);
    printf("Int (%d)  | %p | %p | %p | %p\n", (int)sizeof(int), pI, pI + 1, pI + 2, pI + 3);
    printf("Double(%d)| %p | %p | %p | %p\n\n", (int)sizeof(double), pD, pD + 1, pD + 2, pD + 3);

    printf("Sizeof : %llu, %llu, %llu\n\n", sizeof(pC), sizeof(pI), sizeof(pD));
}