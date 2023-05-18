/*
 *
 *   기존에 a = 3;으로 대입할 수 있었다면,
 *   a(3)으로도 대입이 가능하다.
 *
 */

#include <iostream>
using namespace std;

int main(void)
{
    int a(3); // int a = 3;
    cout << a << endl;

    string name("MyName"); // string name = "MyName"
    cout << name << endl;
}