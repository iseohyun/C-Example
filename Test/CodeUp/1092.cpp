#include <stdio.h>

int main()
{
    int a, b, c;
    int i;
    scanf_s("%d %d %d", &a, &b, &c);
    for (i = 2; i < 1000000; i++) {
        if (!((i % a) || (i % b) || (i % c)))
            break;
    }
    printf("%d ", i);
}