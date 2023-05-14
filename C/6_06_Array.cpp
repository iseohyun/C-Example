// * 구조체배열 *
// 구조체도 배열로 만들 수 있습니다.

#include <stdio.h>

struct STR1
{
    int i;
    int j;
    int arr[5];
    STR1 * p;
};

int main()
{
    STR1 str1[10];

    for (int i = 0; i < 10; i++)
    {
        str1[i].i = i + 2;
        str1[i].j = i * 3;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d, %d\n", str1[i].i, str1[i].j);
    }

    // 배열속의 구조체속의 배열
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            str1[i].arr[j] = i + j;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d_", str1[i].arr[j]);
        }
        printf("\n");
    }

    // 배열속의 포인터
    str1[0].p = &(str1[0]);
    str1[0].i = 10;
    printf("P1] i = %d\n", str1[0].i); // i = 10

    str1[0].p->i = 20;
    printf("P2] i = %d\n", str1[0].i); // i = 20

    str1[0].p->p->p->p->p->p->p->p->p->p->p->p->p->i = 40;
    printf("P3] i = %d\n", str1[0].i); // i = 40
}

//----------------------------------------------------------------
// 과제.

// 배열속의 포인터를 이용해서
// 0이 1을 참조, 1이 2를 참조... 10이 0을 참조하도록 코딩해보세요.