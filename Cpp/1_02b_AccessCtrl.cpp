// * 상속과 접근제어자 *
// 상속의 접근제어자는 아래의 문법과 같습니다.
//		class 클래스명 : 클래스접근제어자 원조클래스
//
// 원조 클래스에서 사용한 접근제어자를 최소 접근제어를 어디까지 허용할 것인지를 서술합니다.
// 예제 :
//	   Root <- Child1 : public		<- Grand1
//			<- Child2 : protected	<- Grnad2
//			<- Child2 : private		<- Grnad3
//
//	예를들어, pub()함수는 원래 public이었지만,
//		child2에서 최소 protected로 상속 받았기 때문에, pub은 protected의 접근제어로 바뀌게 됩니다.
//

#include <iostream>
using namespace std;

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
	//void showPriv() { priv(); } // 불가능
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Child2 : protected Root {
	//void showPriv() { priv(); } // 불가능
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Child3 : private Root {
	//void showPriv() { priv(); } // 불가능
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Grand1 : public Child1 {
	//void showPriv() { priv(); } // 불가능
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Grand2 : public Child2 {
	//void showPriv() { priv(); } // 불가능
	void showProt() { prot(); }
	void showPub() { pub(); }
};

class Grand3 : public Child3 {
	//void showPriv() { priv(); } // 불가능
	//void showProt() { prot(); } // 불가능
	//void showPub() { pub(); } // 불가능
};

int main()
{
	Child1 c1;
	Child2 c2;
	Child3 c3;

	c1.pub();
	// c2.pub();	// Child2가 최소 조건을 prrotected로 바꿔버림
	// c3.pub();	// Child3가 최소 조건을 private로 바꿔버림
}