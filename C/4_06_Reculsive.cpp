// * 재귀함수 *
// 자기 자신이, 자기 자신을 호출 하는 함수를 재귀함수라고 합니다.
// 재귀함수는 코드라인을 줄여주지만, 메모리관리의 측면에서 보면 치명적이라고 할 수 있습니다.
// 정교하게 설계하고, 되도록이면 사용하지 않는 것을 권장합니다.

#include <stdio.h>

// 1부터 n까지 더하는 함수를 생성합니다.
int rSum(int s)
{
    if (s != 0) {
        printf("Call rSum(%d)\n", s);
        s += rSum(s - 1);
    }

    return s;
}

int main()
{
    printf("resault : %d\n", rSum(10));
}

/*
실습과제 :
    아래 함수를 이용하여, 최대공약수 / 팩토리얼 / 피보나치 함수를 구현해 보세요.

    static int func1(int n) {
        if (n == 1)
            return 1;
        else
            return n * func1(n - 1);
    }

    static int func2(int p, int q) {
        if (q == 0)
            return p;
        else
            return func2(q, p % q);

    }

    static int func3(int n) {
        if (n < 2)
            return n;
        else
            return func3(n - 1) + func3(n - 2);
    }
*/