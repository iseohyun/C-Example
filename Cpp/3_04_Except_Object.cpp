/*
* exception개체
* exception을 상속받아 구현이 가능합니다.
*
* Child와 Parent의 catch순서를 바꿔봅니다.
*   warning: exception of type 'Child' will be caught by earlier handler [-Wexceptions]
*/

#include <exception>
#include <iostream>
using namespace std;

class Parent : public exception {
public:
    virtual const char* what() const noexcept override { return "Parent!\n"; }
};

class Child : public Parent {
public:
    const char* what() const noexcept override { return "Child!\n"; }
};

int func(int c) {
    if (c == 1) {
        throw Parent();
    }
    else if (c == 2) {
        throw Child();
    }
    return 0;
}

int main() {
    for (int i = 1; i <= 2; i++) {
        try {
            cout << " > 입력 : " << i << endl;
            func(i);
        }
        catch (Child& c) {
            cout << "Child Catch!" << endl;
            cout << c.what();
        }
        catch (Parent& p) {
            cout << "Parent Catch!" << endl;
            cout << p.what();
        }
    }
}