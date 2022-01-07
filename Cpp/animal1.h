#pragma once

#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
	string name;
	string voice = "È£¿¡¿¨";

protected:
	Animal() {}

	void setName(string name) {
		this->name = name;
	}

	void setVoice(string voice) {
		this->voice = voice;
	}

	string getVoice() {
		return voice;
	}

public:
	void crying() {
		cout << name << "ÀÌ " << voice << "ÇÏ°í ¿ó´Ï´Ù." << endl;
	}

	string getName() {
		return name;
	}
};