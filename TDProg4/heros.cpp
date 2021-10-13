#include "heros.h"

heros::heros() : personnage()
{
	sorts = 3;
}

heros::heros(std::string _nom, int _niveau, int _pv, int _mana, int _force, int _intelligence, int _agility, bool _allie)
				: personnage(_nom, _pv, _mana, _force, _intelligence, _agility, _allie)
{
	niveau = 0;
}

heros::~heros()
{
}

// Accesseurs

int heros::getSorts()
{
	return sorts;
}

// Mutateurs

void heros::setSorts(int _sorts)
{
	sorts = _sorts;
}
