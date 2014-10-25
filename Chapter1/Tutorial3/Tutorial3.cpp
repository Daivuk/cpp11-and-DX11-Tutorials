#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

struct Hero {
	string name = "Bob";
	int health = 100;
};

void main() {
	Hero hero;
	string heroDescription;

	stringstream ss;
	ss << hero.name << " has " << hero.health << " health" << endl;
	ss << "Potion cost $" << fixed << setprecision(2) << 3.497892;
	heroDescription = ss.str();

	cout << heroDescription << endl;

	system("pause");
}
