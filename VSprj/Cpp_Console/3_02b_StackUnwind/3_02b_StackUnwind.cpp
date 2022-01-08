#include <iostream>
#include <stdexcept>
using namespace std;

/*
*  예외 : 스택풀기 (stack unwinding)
* 소멸자를 사용하지 않을 때
*/

int func3(bool mode) {
    cout << "리소스 할당 : 3" << endl;
    if (mode)
        throw runtime_error("Exception from 3!\n");
    cout << "리소스 해제 : 3" << endl;
    return 0;
}

int func2(bool mode) {
    cout << "리소스 할당 : 2" << endl;
    func3(mode);
    cout << "리소스 해제 : 2" << endl;
    return 0;
}

int func1(bool mode) {
    cout << "리소스 할당 : 1" << endl;
    func2(mode);
    cout << "리소스 해제 : 1" << endl;
    return 0;
}

int main() {
    // 예외 발생 안함.
    try {
        func1(false);
    }
    catch (exception& e) {
        cout << "Exception : " << e.what();
    }

    cout << endl << endl;

    // 예외 발생 함.
    try {
        func1(true);
    }
    catch (exception& e) {
        cout << "Exception : " << e.what();
    }
}