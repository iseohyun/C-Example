using namespace std;
#include <iostream>
#include <string>

// * class *
//	���� �������� ������ �߿��� ������� �ܺ� �������̽�(����)���κ��� ��ȣ�ϴ� ������ �մϴ�.
//	���� �����ڴ� private > protected > public ������ private�� ���� ������ ��ȣ�� �մϴ�.
//	protected�� ��Ӱ� ���õ� ��ȣ�����Դϴ�.
// 
//	���� pv�� ���� �ϴ� ������ �ݵ�� 0 < pv < 10�̶�� setPv��� �����Ͻðڽ��ϱ�?
//

class Human {
private:
	string name;
public:
	string getName() {
		return name;
	}

	void setName(string newName) {
		name = newName;
	}
};

void main()
{
	Human my;

	//my.name = "�ӱ�"; // ������ ���� �ʱ� ������ ������ �߻�

	cout << "Name : " << my.getName() << endl;

	my.setName("ȣ��");

	cout << "New Name : " << my.getName() << endl;
}