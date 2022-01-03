#include <exception>
#include <iostream>
using namespace std;

/*
* > Default
* catch������ ������ ó������ ������, ������ ó������ �ʾƼ� ���ܰ� �߻��մϴ�.
* (�������� 50, 51�� ����� ������ ��)
* ��Ӱ��迡 ���� �������� ������ ���� ��� ��ü�� �̸� ó���ϴ� ��쵵 ������,
* �������, case 2 : length_error�� catch(logit_error)���� ó�� ��
* �̸� �Ű澲�� �� ���� ��, catch(...)�� ���ؼ� �ذ� �� �� �ֽ��ϴ�.
* �����̶��, ������ ó�� ���� ���Ѵٴ� ��
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