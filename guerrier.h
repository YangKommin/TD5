#pragma once
#include "unitees.h"

class guerrier : public unitees
{
public:
    guerrier();
    guerrier(int _damage);
    guerrier(std::string _nom,
				int _pv,
				int _mana,
				int _force,
				int _intelligence,
				int _agility,
				bool _allie);
    ~guerrier();

    // méthodes
    int attaquer();

private:

};