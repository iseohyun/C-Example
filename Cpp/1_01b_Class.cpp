using namespace std;
#include <iostream>
#include <string>

// 강의자료 : https://example-code.tistory.com/entry/%ED%81%B4%EB%9E%98%EC%8A%A4

class Human {
public:
	string name;
	string getName();
	void setName(string);
};

string Human::getName() {
	return name;
}

void Human::setName(string newName) {
	name = newName;
}

void main()
{
	Human my;

	my.name = "머글";

	cout << "Name : " << my.getName() << endl;

	my.setName("호빗");

	cout << "New Name : " << my.getName() << endl;
}