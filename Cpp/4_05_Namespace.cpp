#include <iostream>
#include "NameSpaceEx.h"
using namespace std;

// * namespace *
// Namespace는 파일이 같더라도, 또는 다르더라도, 내가 컴파일에 필요한 재료를 선별하는 역할을 합니다.
// Namespace는 해당 역역을 모두 참조 할 수도 있고, 일부만 참조 할 수도 있습니다.
// 

namespace eng
{
    void hello() { cout << "Hello." << endl; }
}

namespace kor
{
    void hello() { std:cout << "안녕하세요." << endl; }
}

namespace NS {
    void func1() { cout << __func__ << endl; }
    void func2() { cout << __func__ << endl; }
}

class A {
public:
    void B();
    int c;
    using MyType = int;
};
void A::B() { cout << "내부함수입니다." << endl; }


int main() {
    // CASE 1 : 다른 namespace의 함수를 호출하고 싶습니다.
    eng::hello(); // namespace를 지정하지 않았다고 사용할 수 없는 것은 아닙니다.


    // CASE 2 : 다른 namespace의 함수를 범위지정연산자(::, scope resolution operator)없이 호출하고 싶습니다.
    using namespace eng; // namespace를 지정하면, 바로 사용할 수 있습니다.
    hello();


    // CASE 3 : 같은 이름의 함수가 존재한다면?
    using namespace kor; // kor에도 hello함수가 있고, eng에도 hello함수가 있습니다.
    // hello(); // 두 함수 모두 사용할 수 없게 됩니다.


    // CASE 4 : namespace에서 특정 함수만 사용하고 싶습니다.
    using NS::func1; // func1만 불러옵니다.
    func1();
    // func2(); // func2는 사용할 수 없습니다.


    AAn::AA1();		// 다른 파일에 있는 내용을 가져오는 내용입니다. #include <CppStyle_NameSpaceEx.h> 경로에 주의합니다.
    // AA1();   // using namespace AAn;이전이기 때문에 아직은 사용할 수 없습니다.
    using namespace AAn;	// 사용방법은 동일합니다.
    AA1();
}