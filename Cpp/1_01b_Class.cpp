using namespace std;
#include <iostream>
#include <string>

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

int main()
{
    Human my;

    my.name = "머글";

    cout << "Name : " << my.getName() << endl;

    my.setName("호빗");

    cout << "New Name : " << my.getName() << endl;
}