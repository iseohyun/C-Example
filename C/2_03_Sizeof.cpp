// * 저장공간의 크기 *
// 각 저장공간의 크기를 프로그램을 통해서 알아낼 수 있습니다.
// 문법은 다음과 같습니다.
//		sizeof(알고자 하는 변수 또는 타입)

#include <stdio.h>

int main()
{
    char c;
    unsigned char uc;
    int i;
    unsigned int ui;
    long l;
    long long ll;
    float f;
    double d;

    printf("char\t\t: %llu / %llu\n", sizeof(c), sizeof(char));
    printf("unsigned char\t: %llu\n", sizeof(uc));
    printf("int\t\t: %llu\n", sizeof(i));
    printf("unsinged int\t: %llu\n", sizeof(ui));
    printf("long\t\t: %llu\n", sizeof(l));
    printf("long long\t: %llu\n", sizeof(ll));
    printf("float\t\t: %llu\n", sizeof(f));
    printf("double\t\t: %llu\n", sizeof(d));
}