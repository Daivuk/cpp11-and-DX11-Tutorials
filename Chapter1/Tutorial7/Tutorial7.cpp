#include <iostream>
#include "Hero.h"
using namespace std;

void main() {
	Hero hero1;
	Hero hero2;
	hero2.setName("Dave");
	Hero hero3;
	hero3.setName("Chloe");

	hero1.print();
	hero1.damage(40);
	hero1.print();

	hero2.print();
	hero3.print();

	cout << "-------------------" << endl;
	Hero heroBob("Bob");
	Hero heroChloe("Chloe");
	Hero heroDave("Dave");

	heroBob.print();
	heroChloe.print();
	heroDave.print();

	cout << "-------------------" << endl;
	Hero hero("Badass Paladin", 10);
	cout << "Paladin armor: " << hero.getArmor() << endl;

	system("pause");
}
