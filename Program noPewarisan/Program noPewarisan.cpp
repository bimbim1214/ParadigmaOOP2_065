#include <iostream>
using namespace std;

class baseClass final {
public:
	virtual void perkenalan() {
		cout << "Hallo saya Function dari basae class";
	}
};

class derivedClass : public baseclass {
public:
	void perkenalan() {
		cout << "Hallo saya Function dari derived Class";
	}
};

int main() {
	derivedClass a;
	a.perkenalan();

	return 0;
}