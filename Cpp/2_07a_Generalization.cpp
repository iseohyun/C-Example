#include <iostream>

class A {
protected:
    char object;
};

class B : public A {
private:
    char option = 'B';
public:
    void run() {
        std::cout << object << option;
    }
};

int main()
{
    B b;
    b.run();
}