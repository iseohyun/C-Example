// ## B는 A와 연관(Association)되어 있다.
//
// * B ----> A (실선)
// * B ----- A (실선)
//
// ## C는 A를 의존(Dependency)한다.
//
// * C - - > A (점선)
using namespace std;
#include <iostream>
#include <string>

class A
{
public:
    string str;
};

class B
{
public:
    void run(A a)
    {
        cout << "Class B: " << a.str << endl;
    }
};

class C
{
public:
    A a;
    void run()
    {
        a.str = "@C";
        cout << "Class C: " << a.str << endl;
    }
};

int main()
{
    A a;
    B b;

    a.str = "@main";
    b.run(a);

    C c;
    c.run();
}