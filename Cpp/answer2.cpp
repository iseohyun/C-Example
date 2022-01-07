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
		cout << name << "�� ���������մϴ�." << endl;
	}
};

class Dog : public Animal, public runable {
public:
	Dog(string name, string voice) {
		this->setName(name);
		this->setVoice(voice);
	}
	void crying() {
		cout << getName() << "�� " << getVoice() << "�ϰ� ¢���ϴ�." << endl;
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
		cout << name << "�� ���ư��ϴ�." << endl;
	}
	void landing(string name) {
		cout << name << "�� �����մϴ�." << endl;
	}
};



void main()
{
	Dog bulldog("�ҵ�", "����");
	bulldog.crying();

	Birds chicken("ġŲ");
	chicken.flying(chicken.getName());
	chicken.landing(chicken.getName());

	runable::sprint("ǥ��");
	bulldog.run();
}