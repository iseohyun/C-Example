#include <iostream>
using namespace std;

/* noexcept 키워드
* 해당 키워드를 이용하면, 해당 함수안에서는 throw하지 않는다고 명시하는 것입니다.
*
* noexcept존에서 throw를 하면 에러가 납니다.
*/

void kimchi()  {
    //throw __func__;
}

void bab() noexcept{
    throw __func__;
}

int main() {
    try {
        kimchi();
        bab();
    }
    catch (const char* x) {
        cout << "Error : " << x << endl;
    }
}