/* try... catch... throw
* 1. 에러가 발생할 것 같은 함수를 실행할 때 try로 감싸줍니다.
* 2. 에러가 발생했을 때, 실행해야하는 함수입니다.
* 3. throw를 통해서 강제로 이벤트를 발생 시킬 수도 있습니다.
*/

#include <iostream>
using namespace std;

void Func03() {
    cout << "Func03 실행\n";
}

void Func02() {
    string str = "Func02 예외 발생";
    throw str;
    Func03();
}

void Func01() {
    cout << "Func01 실행\n";
    Func02();
}

int main(void)
{
    try
    {
        Func01();
    }
    catch (string ex)
    {
        cout << "예외 처리(main) : " << ex << endl;
    }
    return 0;
}