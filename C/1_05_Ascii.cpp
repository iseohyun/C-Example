// * 문자와 숫자 *
// 문자와 숫자의 인식의 경계를 없애는 것이 중요.

#include <stdio.h>

int main()
{
    printf("숫자로 출력: %d\n", 0);
    printf("문자로 출력: %c\n", 0);
    printf("숫자로 출력: %d\n", '0');
    printf("문자로 출력: %c\n\n", '0');

    printf("* 아스키 문자를 모두 프린트 해 봅니다.\n");

    for (int i = 0; i < 128; i++)
    {
        for (int j = 0; i % 16; i++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    printf("\n");
}