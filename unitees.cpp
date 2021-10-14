#include "unitees.h"

unitees::unitees()
{
	damage = 10;
	chanceCritique = abs(agility - 100);
	critique = 0;
}

unitees::unitees(int _damage)
{
	damage = _damage;
	chanceCritique = abs(agility - 100);
	critique = 0;
}

unitees::unitees(std::string _nom, int _pv, int _mana, int _force, int _intelligence, int _agility, bool _allie)
						: personnage(_nom, _pv, _mana, _force, _intelligence, _agility, _allie)
{
}

unitees::~unitees()
{
}
