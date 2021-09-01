#include <iostream>
using namespace std;

/* noexcept 키워드
* 해당 키워드를 이용하면, 해당 함수안에서는 throw하지 않는다고 명시하는 것입니다.
* 만약 에러를 발생시키면, 오동작을 하겠지요?
*/

void foo() noexcept {}

//void bar() noexcept { throw 1; }
void bar() { throw 1; }

int main() {
    try {
        foo();
        bar();
    }
    catch (int x) {
        cout << "Error : " << x << endl;
    }
}