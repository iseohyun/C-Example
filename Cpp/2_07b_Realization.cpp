// Realization(실체화) : 개념상으로만 존재하는 객체를 상속

using namespace std;
#include <iostream>
#include <string>

class A
{
protected:
    string str = "Abstract Class";
    virtual void run() = 0;
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