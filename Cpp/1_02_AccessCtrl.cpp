#include <stdio.h>

// * class *
//	접근 제어자의 역할은 중요한 제어변수를 외부 인터페이스(조작)으로부터 보호하는 역할을 합니다.
//	접근 제어자는 private > protected > public 순으로 private가 가장 강력한 보호를 합니다.
//	protected는 상속과 관련된 보호레벨입니다.
// 
//	만약 pv에 들어가야 하는 변수가 반드시 0 < pv < 10이라면 setPv어떻게 제어하시겠습니까?
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