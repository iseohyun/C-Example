/*
 *  예외 : 스택풀기 (stack unwinding)
 *   예외가 발생이 되면, 이후의 코드들이 실행되지 않고, 바로 catch문으로 이동하기 때문에,
 *  함수를 호출하면서 생성된 stack에서 문제가 발생할 수 있습니다. 따라서, 따로 메모리 설정을 했다면 반드시 해제가 될 수 있도록 신경써주어야 합니다.
 */

#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Dummy
{
public:
    string name;
    Dummy(string name) : name(name)
    {
        cout << "  할당 @ " << name << endl;
    }
    Dummy(const Dummy &other) : name(other.name)
    {
        cout << "  복사됨 @ " << other.name << endl;
    }
    ~Dummy()
    {
        cout << "  해제 @ " << name << endl;
    }
};

void func3(Dummy d)
{
    cout << "시작 : " << __func__ << endl;
    d.name = __func__;
    throw runtime_error("throw error!\n");
    cout << "종료 : " << __func__ << endl;
}

void func2(Dummy d)
{
    cout << "시작 : " << __func__ << endl;
    d.name = __func__;
    func3(d);
    cout << "종료 : " << __func__ << endl;
}

void func1(Dummy d)
{
    cout << "시작 : " << __func__ << endl;
    d.name = __func__;
    func2(d);
    cout << "종료 : " << __func__ << endl;
}

int main()
{
    Dummy d("main");
    try
    {
        // func1 > func2 > func3 을 호출
        // 각 함수의 입장시 "시작", 퇴장시 "종료"출력
        func1(d);
    }
    catch (exception &e)
    {
        cout << "Exception : " << e.what();
    }
}