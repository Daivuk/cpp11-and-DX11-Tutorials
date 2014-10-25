#include "Hero.h"
#include <iostream>
using namespace std;

Hero::Hero() {
}

Hero::Hero(string name) {
	m_name = name;
}

Hero::Hero(string name, int armor) {
	m_name = name;
	m_armor = armor;
}

Hero::~Hero() {
	cout << m_name << " is destroyed" << endl;
}

void Hero::print() {
	cout << m_name << " as " << m_health << " health" << endl;
}

void Hero::damage(int dmg) {
	m_health -= dmg;
	if (m_health < 0) m_health = 0;
}

void Hero::setName(string name) {
	m_name = name;
}

int Hero::getArmor() {
	return m_armor;
}
