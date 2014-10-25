#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Hero {
	string name = "Bob";
	int health = 100;
};

// 1 Parameter function
void printHero(Hero hero) {
	cout << hero.name << " has " << hero.health << " health" << endl;
}

// Reference parameter
void damageHero(Hero& hero, int damage) {
	hero.health -= damage;
}

// Return
int getHeroTakenDamage(Hero hero) {
	return 100 - hero.health;
}

// Default parameter
void setHeroName(Hero& hero, string name = "Bob") {
	hero.name = name;
}

void main() {
	Hero hero;

	printHero(hero);
	damageHero(hero, 40);
	printHero(hero);

	cout << hero.name << " has taken " << getHeroTakenDamage(hero) << " damage" << endl;

	setHeroName(hero, "Dave");
	cout << hero.name << endl;

	setHeroName(hero, "Gaston");
	cout << hero.name << endl;

	setHeroName(hero); // Default parameter will kick in
	cout << hero.name << endl;

	system("pause");
}
