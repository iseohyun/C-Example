#include <exception>
#include <iostream>
using namespace std;

/*
* > Default
* catch문에서 에러를 처리하지 않으면, 에러를 처리하지 않아서 예외가 발생합니다.
* (예제에서 50, 51을 지우면 에러가 남)
* 상속관계에 따라서 지정하지 않으면 상위 상속 개체가 이를 처리하는 경우도 있지만,
* 예를들어, case 2 : length_error는 catch(logit_error)에서 처리 함
* 이를 신경쓰지 못 했을 때, catch(...)를 통해서 해결 할 수 있습니다.
* 단점이라면, 변수를 처리 하지 못한다는 것
*/

int func(int c) {
    switch (c) {
    case 1:
        throw domain_error("domain");
    case 2:
        throw length_error("length");
    case 3:
        throw logic_error("logic");
    case 4:
        throw overflow_error("overflow");
    case 5:
        throw range_error("range");
    case 6:
        throw runtime_error("runtime");
    case 7:
        throw underflow_error("underflow");
    default:
        break;
    }
    return 0;
}

int main() {
    for (int i = 1; i <= 7; i++) {
        try {
            printf(" > %d : ", i);
            func(i);
        }
        catch (domain_error e) {
            cout << "(D) " << e.what() << endl;
        }
        catch (logic_error e) {
            cout << "(L) " << e.what() << endl;
        }
        catch (overflow_error e) {
            cout << "(OV) " << e.what() << endl;
        }
        catch (underflow_error e) {
            cout << "(UD) " << e.what() << endl;
        }
        catch (range_error e) {
            cout << "(R) " << e.what() << endl;
        }
        catch (...) {
            cout << "Default Error" << endl;
        }
    }
}