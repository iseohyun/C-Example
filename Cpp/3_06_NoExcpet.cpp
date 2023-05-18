/* noexcept 키워드
 * 해당 키워드를 이용하면, 해당 함수안에서는 throw하지 않는다고 명시하는 것입니다.
 *
 * noexcept존에서 throw가 발생 하면 에러가 납니다.
 */

#include <iostream>
using namespace std;

void foo(int i) noexcept {
    if (i == 0)
        try {
        throw __func__;
    }
    catch (const char* e) {
    }
    else
        cout << "No Error" << endl;
}

int main() {
    try {
        foo(0);
    }
    catch (const char* x) {
        cout << "Error : " << x << endl;
    }
}