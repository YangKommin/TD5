#include <time.h>
#include "archer.h"

archer::archer()
{
	pv = 1000;
	force = 10;
	intelligence = 5;
	agility = 15;
}

archer::archer(int _damage) : unitees(_damage)
{
}

archer::archer(std::string _nom, int _pv, int _mana, int _force, int _intelligence, int _agility, bool _allie)
					: unitees(_nom, _pv, _mana, _force, _intelligence, _agility, _allie)
{
}

archer::~archer()
{
}

float archer::attaquer()
{
	srand(time(NULL));
	critique = rand() % 101;
	if (chanceCritique >= critique)
		return (damage * force) * 2;
	return (damage * force);
}