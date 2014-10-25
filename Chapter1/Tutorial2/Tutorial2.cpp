#include <iostream>
#include <string>
using namespace std;

struct Hero {
	string name = "Bob";
	int health = 100;
};

void main() {
	int a = 10;
	float b = 3.5f;
	double c = 6.4321;
	string d = "Hello World!";
	Hero hero;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << hero.name << " has " << hero.health << " health" << endl;

	system("pause");
}
