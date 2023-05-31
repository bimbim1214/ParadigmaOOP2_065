#include <iostream>
using namespace std;

class orang {
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "umur di buat dengan umur " << umur << "\n" << endl;
	}
};

class pekerja : virtual public orang {
public:
	pekerja(int pUmur) :
		orang(pUmur)
	{
		cout << "pekerja dibuat\n" << endl;
	}
};

class pelajar : virtual public orang {
public:
	pelajar(int pUmur) :
		orang(pUmur)
	{
		cout << "pelajar di buat\n" << endl;
	}
};

class budi : public pekerja, public pelajar {

};