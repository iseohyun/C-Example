#include <stdio.h>

// * class *
//	���� �������� ������ �߿��� ������� �ܺ� �������̽�(����)���κ��� ��ȣ�ϴ� ������ �մϴ�.
//	���� �����ڴ� private > protected > public ������ private�� ���� ������ ��ȣ�� �մϴ�.
//	protected�� ��Ӱ� ���õ� ��ȣ�����Դϴ�.
// 
//	���� pv�� ���� �ϴ� ������ �ݵ�� 0 < pv < 10�̶�� setPv��� �����Ͻðڽ��ϱ�?
//

class A {
private:	int pv;
protected:	int pt;
public:		int pu;
	  void setPt(int newPt) {
		  pt = newPt;
	  }
	  void setPv(int newPv) {
		  pv = newPv;
	  }
	  void showAll() {
		  printf("pv:%d, pt:%d, pu:%d", pv, pt, pu);
	  }
};

int main()
{
	A a;

	a.pu = 1;
	//a.pv = 2;
	//a.pt = 3;
	a.setPt(2);
	a.setPv(3);

	a.showAll();
}