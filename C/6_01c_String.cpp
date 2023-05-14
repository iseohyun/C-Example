// * 문자열 *
// 문자열은 (당연하게도) 문자들의 집합입니다.
// 문자열의 특징은, 마지막이 0(=Null)이어야 한다는 것입니다.

#include <stdio.h>

int main()
{
    char string[255] = "hello world!";
    printf("%s\n", string);

    string[7] = 0; // '0'이 등장하면 문자열의 마지막이라고 판단합니다.
    printf("%s\n", string);
}