#include <iostream>

// 집합
// b가 사라지더라도, a는 없어지지 않는다. 

class A {
private:
    char object;
public:
    A(char object) {
        this->object = object;
    }
    char getObj() {
        return object;
    }
};

class B {
public:
    A* a;
public:
    void run() {
        std::cout << a->getObj();
    }
};

int main()
{
    A a1('C'), a2('O');
    {
        B b;
        b.a = &a1;
        b.run();

        b.a = &a2;
        b.run();
    }
}