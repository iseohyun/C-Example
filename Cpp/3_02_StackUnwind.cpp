#include <iostream>
#include <stdexcept>
using namespace std;

/*
*  ���� : ����Ǯ�� (stack unwinding)
*   ���ܰ� �߻��� �Ǹ�, ������ �ڵ���� ������� �ʰ�, �ٷ� catch������ �̵��ϱ� ������,
*  �Լ��� ȣ���ϸ鼭 ������ stack���� ������ �߻��� �� �ֽ��ϴ�. ����, ���� �޸� ������ �ߴٸ� �ݵ�� ������ �� �� �ֵ��� �Ű���־�� �մϴ�.
*/

class Resource {
public:
    Resource(int id) : id_(id) {
        cout << "���ҽ� �Ҵ� : " << id << endl;
    }
    ~Resource() {
        cout << "���ҽ� ���� : " << id_ << endl;
    }

private:
    int id_;
};

int func3(bool mode) {
    Resource r(3);
    if (mode)
        throw runtime_error("Exception from 3!\n");
    return 0;
}

int func2(bool mode) {
    Resource r(2);
    func3(mode);
    return 0;
}

int func1(bool mode) {
    Resource r(1);
    func2(mode);
    return 0;
}

int main() {
    // ���� �߻� ����.
    try {
        func1(false);
    }
    catch (exception& e) {
        cout << "Exception : " << e.what();
    }

    cout << endl << endl;

    // ���� �߻� ��.
    try {
        func1(true);
    }
    catch (exception& e) {
        cout << "Exception : " << e.what();
    }
}