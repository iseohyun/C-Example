#include <iostream>
using namespace std;

// * ������ �����ε� *
// ������ �����ε��� �����ڸ� ������ �ϴ� �۾��� �մϴ�.
// ��ü�������� �߻�ȭ �� ��ü���� ���������� �䱸�Ǵ� ������ �����������ν�
// ��ü�� �� �����ϰ� ����� �� �ֵ��� �����ݴϴ�.
// 
// ~c �� �Է����� ��, ID�� ��µǵ��� ����� ���ô�.

class A {
	int ID = 11;
public:
	void operator<<(int id) { ID = id; }
	void operator++() { ID++; }
	A operator+(A& a) { A b; b.ID += a.ID; return b; }
	void showID() { cout << "ID:" << ID << endl; }
};

void main()
{
	A a, b, c;
	a << 11;
	b << 22;
	c = a + b;
	++c;
	c.showID();
	//~c;
}