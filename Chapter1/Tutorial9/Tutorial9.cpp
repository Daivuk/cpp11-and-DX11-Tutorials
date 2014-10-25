#include <iostream>
#include <memory>
#include "Hero.h"
using namespace std;

void main() {
	// Never do this
	Hero* hero = new Hero("Chloe");
	hero->print();
	delete hero;

	cout << "----------------" << endl;
	{
		auto bob = make_shared<Hero>("Bob");
		bob->print();
	}

	cout << "----------------" << endl;
	{
		shared_ptr<Hero> bob2;
		{
			auto bob = make_shared<Hero>("Bob");
			bob->print();
			bob2 = bob;
		}
		bob2->print();
	}

	system("pause");
}
