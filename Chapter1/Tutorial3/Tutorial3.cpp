#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Hero {
	string name = "Bob";
	int health = 100;
};

void main() {
	Hero hero;
	string heroDescription;

	stringstream ss;
	ss << hero.name << " has " << hero.health << " health";
	heroDescription = ss.str();

	cout << heroDescription << endl;

	system("pause");
}
