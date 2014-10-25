#pragma once
#include <string>
using namespace std;

class Hero {
public:
	Hero();
	Hero(string name);
	Hero(string name, int armor);
	void print();
	void damage(int dmg);
	void setName(string name);
	int getArmor();

private:
	string m_name = "Bob";
	int m_health = 100;
	int m_armor = 0;
};
