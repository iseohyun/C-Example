// * 전처리기 *
// #define은 전처리기에서 컴파일을 하기 전에 해당위치에 고대로 붙여넣기 하는 효과가 있습니다.
// 잘 이용만 한다면, 코드길이를 획기적으로 줄일 수 도 있습니다.
// 여러위치를 동시에 변경해야 할 때, #define만 수정하여 매우 효과적으로 한꺼번에 변경 할 수도 있습니다.

#include <stdio.h>

#define GREETING "good morning"
#define var(x) x + 1
#define MIN(x, y) (x > y ? y : x)
#define log(x) printf("LOG(%d)\t: %s", __LINE__, x)
#define out(x) printf(#x " = %d\n", x)
#define Aout(x, n) printf(#x "[%d] = %d\n", n, x[n])

int main()
{
    log("매크로 출력\n");
    printf("greeting : %s\n", GREETING);
    printf("var(3) : %d\n", var(3));
    printf("MIN(3,4): %d\n", MIN(3, 4));
    printf("MIN(5,4): %d\n\n", MIN(5, 4));

    const int constVar = 1;
    out(constVar);

    int a[5];
    for (int i = 0; i < 5; i++)
    {
        a[i] = i;
        // out(a[i]);
        Aout(a, i);
    }
}