#include <iostream>
using namespace std;

/* noexcept Ű����
* �ش� Ű���带 �̿��ϸ�, �ش� �Լ��ȿ����� throw���� �ʴ´ٰ� ����ϴ� ���Դϴ�.
*
* noexcept������ throw�� �ϸ� ������ ���ϴ�.
*/

void kimchi()  {
    //throw __func__;
}

void bab() noexcept{
    throw __func__;
}

int main() {
    try {
        kimchi();
        bab();
    }
    catch (const char* x) {
        cout << "Error : " << x << endl;
    }
}