#include <iostream>
#include <string>
#include "../2_08b_text2/animal1.h"
using namespace std;

class flyable {
public:
	virtual void flying(string name) = 0;
	virtual void landing(string name) = 0;
};

class runable {
public:
	static void sprint(string name) {
		cout << name << "이 전력질주합니다." << endl;
	}
};

class Dog : public Animal, public runable {
public:
	Dog(string name, string voice) {
		this->setName(name);
		this->setVoice(voice);
	}
	void crying() {
		cout << getName() << "이 " << getVoice() << "하고 짖습니다." << endl;
	}

	void run() {
		sprint(getName());
	}
};

class Birds : public Animal, public flyable {
public:
	Birds(string name) {
		setName(name);
	}
	void flying(string name) {
		cout << name << "이 날아갑니다." << endl;
	}
	void landing(string name) {
		cout << name << "이 착지합니다." << endl;
	}
};



void main()
{
	Dog bulldog("불독", "컹컹");
	bulldog.crying();

	Birds chicken("치킨");
	chicken.flying(chicken.getName());
	chicken.landing(chicken.getName());

	runable::sprint("표범");
	bulldog.run();
}