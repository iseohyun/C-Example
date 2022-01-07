#include <iostream>
#include <string>
using namespace std;

class Avatar {
protected:
    string name = "Tim";
public:
    Avatar() {}
    Avatar(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }
};

class newAvatar : public Avatar {
public:
    string skill = "not yet";
    newAvatar() {
        setName(getName() + "(v2)");
    }
    newAvatar(string name) {
        __super::name = name + "(v2)";
    }
    virtual string action() {
        return skill;
    }
};

class allNewAvatar : public newAvatar {
public:
    string skill = "heal";
    string action() {
        return skill;
    }
    string action2() {
        return __super::skill;
    }
};

int _main()
{
    Avatar my("torr");
    my.setName("jun");
    cout << my.getName() << endl;

    newAvatar newMy("brown");
    cout << newMy.getName() << endl;

    allNewAvatar allMy;
    allMy.setName("Lyn");
    cout << newMy.action() << endl;
    cout << allMy.action() << endl;
    cout << allMy.action2() << endl;

    newAvatar* p = &allMy;
    cout << p->action();

    return 1;
}