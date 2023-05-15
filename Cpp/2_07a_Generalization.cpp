// Generalization(일반화) : 두 클래스가 상속관계(세대:Generation)에 있음

using namespace std;
#include <iostream>
#include <string>

class A
{
protected:
    string str = "Class A";
};

class B : public A
{
public:
    void run()
    {
        std::cout << "Class B: " << str << endl;
    }
};

int main()
{
    B b;
    b.run();
}