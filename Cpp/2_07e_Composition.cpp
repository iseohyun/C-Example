#include <iostream>

class A {
public:
    char object = 'A';
};

class C {
public:
    char box = 'C';
};

class B : public A {
private:
    A a;
    C c;
public:
    void run() {
        std::cout << a.object << c.box;
    }
};

int main()
{
    B b;
    b.run();
}