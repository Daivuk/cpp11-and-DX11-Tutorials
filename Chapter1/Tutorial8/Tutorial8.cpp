#include <iostream>
#include "Hero.h"
using namespace std;

void main() {
	int a = 5;
	cout << "a = " << a << endl;
	int& b = a;
	cout << "b = " << b << endl;
	a = 3;
	cout << "b = " << b << endl;

	cout << "--------------" << endl;
	cout << "Address of a = " << &a << endl;
	int* c = &a;
	cout << "c = " << c << endl;
	cout << "Content of c = " << *c << endl;

	cout << "--------------" << endl;
	*c = 10;
	cout << "a = " << a << endl;

	cout << "--------------" << endl;
	Hero hero("Bob");
	hero.print();
	cout << "Address of hero = " << &hero << endl;
	Hero* pHero = &hero;
	cout << "pHero = " << pHero << endl;
	(*pHero).print();
	pHero->print();

	system("pause");
}
