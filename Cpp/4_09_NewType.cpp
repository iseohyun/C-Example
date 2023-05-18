/*
 * * new Type *
 *
 * bool (1bit)
 * auto는 대입되는 변수에 따라서 자동으로 결정합니다.
 * -> bool, wchar_t, char16_t, char32_t, auto
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    bool b;
    wchar_t wc;	//unsigned 16bit
    char16_t c16;
    char32_t c32;

    b = (bool) - 1;
    c32 = -1;
    c16 = -1;
    wc = -1;
    printf("%08X, %08X, %08X, %08X\n", (unsigned int)b, c32, c16, wc);

    cout << "sizeof(bool) : " <<sizeof(b) << endl;
    cout << "sizeof(wchar_t) : " <<sizeof(wchar_t) << endl;
    cout << "sizeof(char16_t) : " <<sizeof(char16_t) << endl;
    cout << "sizeof(char32_t) : " <<sizeof(char32_t) << endl;

    auto a1 = wc;
    auto a2 = c32;
    auto a3 = b;
    printf("auto : %d, %d, %d\n", (int)a1, a2, a3);
}