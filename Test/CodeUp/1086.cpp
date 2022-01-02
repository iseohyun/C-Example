#include <stdio.h>

int main()
{
    long w, h, b;
    float mb;
    scanf("%d %d %d", &w, &h, &b);
    mb = (w * h * b) / (1024 * 1024.) / 8;
    printf("%.2f MB", mb);
}