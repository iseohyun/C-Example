/*
*  예외 : 여러타입으로 처리하기
*   exception발생 타입에 따라서 여러형태로 받을 수 있습니다.
*/

#include <iostream>
#include <stdexcept>
using namespace std;

void func(int mode) {
    switch (mode) {
    case 0:
        throw 1;
    case 1:
        throw 'a';
    case 2:
        throw "XYZ";
    case 3:
        throw string("STR");
    }
}

int main() {
    for (int i = 0; i < 4; i++) {
        try {
            func(i);
        }
        catch (char e) {
            cout << "Exception : " << e << endl;
        }
        catch (int e) {
            cout << "Exception : " << e << endl;
        }
        catch (const char* e) {
            cout << "Exception : " << e << endl;
        }
        catch (string& e) {
            cout << "Exception : " << e << endl;
        }
    }
}