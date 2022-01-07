#include <iostream>

// ## B는 A와 연관되어 있다.
// 
// * B ----> A
// 
// ## C는 A를 의존한다.
// 
// * C - - > A

class A {
public:
    char object = 'A';
};

class B{
private:
    A a;
    char option = 'B';
public:
    void run() {
        std::cout << a.object << option << '\n';
    }
};

class C {
public:
    void run() {
        A a;
        std::cout << a.object << '\n';
    }
};

int main()
{
    B b;
    b.run();

    C c;
    c.run();
}