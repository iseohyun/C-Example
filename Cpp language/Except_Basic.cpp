#include <iostream>
using namespace std;

/* try... catch... throw
* 1. ������ �߻��� �� ���� �Լ��� ������ �� try�� �����ݴϴ�.
* 2. ������ �߻����� ��, �����ؾ��ϴ� �Լ��Դϴ�.
* 3. throw�� ���ؼ� ������ �̺�Ʈ�� �߻� ��ų ���� �ֽ��ϴ�.
*/

void Func03() {
	cout << "Func03 ����\n";
}

void Func02() {
	string str = "Func02 ���� �߻�";
	throw str;
	Func03();
}

void Func01() {
	cout << "Func01 ����\n";
	Func02();
}

int main(void)
{
	try
	{
		Func01();
	}
	catch (string ex)
	{
		cout << "���� ó��(main) : " << ex << endl;
	}
	return 0;
}