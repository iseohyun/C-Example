// 집합(Aggregation)
// b가 사라지더라도, a는 없어지지 않는다.

using namespace std;
#include <iostream>
#include <string>

class A
{
private:
    string str;

public:
    A(string str)
    {
        this->str = str;
    }
    string getStr()
    {
        return str;
    }
};

class B
{
public:
    A *a;

public:
    void run()
    {
        std::cout << a->getStr() << endl;
    }
};

int main()
{
    A a1("first"), a2("Second");
    {
        B b;
        b.a = &a1;
        b.run();

        b.a = &a2;
        b.run();
    }
}