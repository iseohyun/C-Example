#include <stdio.h>

// * 변수의 생성과 소멸 *
// 효율적인 메모리 관리를 위해서, 필요없다고 판단되는 변수는 메모리에서 삭제합니다.
// 필요없다고 판단되는 근거는 중괄호({})를 기준으로 합니다.
// 아래 예제에서 보는바와 같이 같은 i라는 변수지만,
// 서로 다른 4개의 저장공간이 생성됨을 확인 할 수 있습니다.

int i = 9; // 첫째

int main()
{
    printf("A: %d\n", i);

    int i = 8;	// 둘째
    printf("B: %d\n", i);
    {
        int i = 7;	// 셋째
        printf("C: %d\n", i);
        {
            int i = 6;	// 넷째
            printf("D: %d\n", i);
        }
        printf("E: %d\n", i);
    }
    printf("F: %d\n", i);
}