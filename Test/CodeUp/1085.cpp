#include <stdio.h>

int main()
{
    long h, b, c, s;
    float mb;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    mb = (h * b * c * s) / (1024 * 1024.) / 8;
    printf("%.1f MB", mb);
}