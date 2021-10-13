#pragma once
#include "unitees.h"

class archer : public unitees
{
public:
	archer();
	archer(int _damage);
	archer(std::string _nom,
			int _pv,
			int _mana,
			int _force,
			int _intelligence,
			int _agility,
			bool _allie);
	~archer();

	//méthodes
	float attaquer();

private:


protected:

};