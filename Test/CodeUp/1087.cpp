#include <stdio.h>

int main()
{
    int sum = 0, n;
    scanf("%d", &n);
    for (int i = 1; sum < n; i++)
        sum += i;
    printf("%d", sum);
}