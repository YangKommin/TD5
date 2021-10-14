#include "guerrier.h"

guerrier::guerrier()
{
	pv = 1250;
	force = 20;
	intelligence = 5;
	agility = 5;
}

guerrier::guerrier(int _damage) : unitees(_damage)
{
	//...
}

guerrier::guerrier(std::string _nom, int _pv, int _mana, int _force, int _intelligence, int _agility, bool _allie)
					: unitees(_nom, _pv, _mana, _force, _intelligence, _agility, _allie)
{
}

guerrier::~guerrier() {}

int guerrier::attaquer()
{
	critique = rand() % 101;
	if (chanceCritique >= critique)
		return (damage * force) * 2;
	return (damage * force);
}