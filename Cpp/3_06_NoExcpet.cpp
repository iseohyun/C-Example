#include <iostream>
using namespace std;

/* noexcept Ű����
* �ش� Ű���带 �̿��ϸ�, �ش� �Լ��ȿ����� throw���� �ʴ´ٰ� ����ϴ� ���Դϴ�.
* ���� ������ �߻���Ű��, �������� �ϰ�����?
*/

void foo() noexcept {}

//void bar() noexcept { throw 1; }
void bar() { throw 1; }

int main() {
    try {
        foo();
        bar();
    }
    catch (int x) {
        cout << "Error : " << x << endl;
    }
}