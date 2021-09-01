#include <exception>
#include <iostream>
using namespace std;

/*
* exception��ü
* exception�� ��ӹ޾� ������ �����մϴ�.
*/

class Parent : public std::exception {
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
            cout << " > �Է� : " << i << endl;
            func(i);
        }
        catch (Parent& p) {
            cout << "Parent Catch!" << endl;
            cout << p.what();
        }
        catch (Child& c) {
            cout << "Child Catch!" << endl;
            cout << c.what();
        }
    }
}