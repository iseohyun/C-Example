#include <iostream>
#include <stdexcept>
using namespace std;

/*
*  예외 : 스택풀기 (stack unwinding)
*   예외가 발생이 되면, 이후의 코드들이 실행되지 않고, 바로 catch문으로 이동하기 때문에,
*  함수를 호출하면서 생성된 stack에서 문제가 발생할 수 있습니다. 따라서, 따로 메모리 설정을 했다면 반드시 해제가 될 수 있도록 신경써주어야 합니다.
*/

class Resource {
public:
    Resource(int id) : id_(id) {}
    ~Resource() { cout << "리소스 해제 : " << id_ << endl; }

private:
    int id_;
};

int func3(bool mode) {
    Resource r(3);
    if (mode)
        throw runtime_error("Exception from 3!\n");
    return 0;
}

int func2(bool mode) {
    Resource r(2);
    func3(mode);
    cout << "func2 실행 됨!" << endl;
    return 0;
}

int func1(bool mode) {
    Resource r(1);
    func2(mode);
    cout << "func1 실행 됨!" << endl;
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