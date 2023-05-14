// * 구조체 예제2 *
// 구조체 안에, 얼마든지 구조체를 넣을 수 있고, 
// 참조 방식은 마침표(.)를 연속해서 사용하면 됩니다.
// 예제를 이용해서 4를 출력해 봅시다.

#include <stdio.h>

struct ST1 {
    char a1;
    char a2;
};

struct ST2 {
    char a3;
    char a4;
    int a5;
};

struct ST_ALL {
    ST1 st1;
    ST2 st2;
};

int main()
{
    ST_ALL st = { {1, 2}, {3, 4, 5} };
    printf("[a1, a2] = %d, %d\n", st.st1.a1, st.st1.a2);
    printf("[a3, a4, a5] = %d, %d, %d\n", st.st2.a3, st.st2.a4, st.st2.a5);
    printf("SizeOf [ALL:%d / ST1:%d / ST2:%d]\n", sizeof(st), sizeof(st.st1), sizeof(st.st2));
}