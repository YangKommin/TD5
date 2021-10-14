#include "mage.h"

mage::mage()
{
	pv = 900;
	force = 5;
	intelligence = 20;
	agility = 5;
}

mage::mage(int _damage) : unitees(_damage)
{
}

mage::mage(std::string _nom, int _pv, int _mana, int _force, int _intelligence, int _agility, bool _allie)
						: unitees(_nom, _pv, _mana, _force, _intelligence, _agility, _allie)
{
}

mage::~mage()
{
}

int mage::attaquer()
{
	critique = rand() % 101;
	if (chanceCritique >= critique)
		return (damage * force) * 2;
	return (damage * force);
}