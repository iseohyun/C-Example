#include <stdio.h>

int main()
{
    long long a, m, d, n;

    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);
    while (--n) {
        a *= m;
        a += d;
    }
    printf("%lld ", a);
}