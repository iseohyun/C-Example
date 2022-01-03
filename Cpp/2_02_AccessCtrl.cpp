#include <iostream>
using namespace std;

// * ��Ӱ� ���������� *
// ����� ���������ڴ� �Ʒ��� ������ �����ϴ�.
//		class Ŭ������ : Ŭ�������������� ����Ŭ����
//
// ���� Ŭ�������� ����� ���������ڸ� �ּ� ������� ������ ����� �������� �����մϴ�.
// ���� :
//	   Root <- Child1 : public		<- Grand1
//			<- Child2 : protected	<- Grnad2
//			<- Child2 : private		<- Grnad3
//
//	�������, pub()�Լ��� ���� public�̾�����,
//		child2���� �ּ� protected�� ��� �޾ұ� ������, pub�� protected�� ��������� �ٲ�� �˴ϴ�.
//

class Root {
private:
	void priv() { cout << "Private\n"; }
protected:
	void prot() { cout << "Protected A\n"; }
public:
	void pub() { cout << "Public A\n"; }
};

class Child1 : public Root {
public:
	//void showPriv() { priv(); } // �Ұ���
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Child2 : protected Root {
	//void showPriv() { priv(); } // �Ұ���
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Child3 : private Root {
	//void showPriv() { priv(); } // �Ұ���
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Grand1 : public Child1 {
	//void showPriv() { priv(); } // �Ұ���
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Grand2 : public Child2 {
	//void showPriv() { priv(); } // �Ұ���
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Grand3 : public Child3 {
	//void showPriv() { priv(); } // �Ұ���
	//void showProt() { prot(); } // �Ұ���
	//void showPub() { pub(); } // �Ұ���
};

int main()
{
	Child1 c1;
	Child2 c2;
	Child3 c3;

	c1.pub();
	// c2.pub();	// Child2�� �ּ� ������ prrotected�� �ٲ����
	// c3.pub();	// Child3�� �ּ� ������ private�� �ٲ����
}