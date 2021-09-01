#include <iostream>
#include <stdexcept>
using namespace std;

/*
*  ���� : ����Ÿ������ ó���ϱ�
*   exception�߻� Ÿ�Կ� ���� �������·� ���� �� �ֽ��ϴ�.
*/

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