#pragma once
#include "personnage.h"

class unitees : public personnage
{
public:
	unitees();
	unitees(int _damage);
	unitees(std::string _nom,
			int _pv,
			int _mana,
			int _force,
			int _intelligence,
			int _agility,
			bool _allie);
	~unitees();

private:


protected:
	int damage;
	int chanceCritique;
	int critique;
};

