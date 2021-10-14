#pragma once
#include "unitees.h"

class mage : public unitees
{
public:
    mage();
    mage(int _damage);
    mage(std::string _nom,
			int _pv,
			int _mana,
			int _force,
			int _intelligence,
			int _agility,
			bool _allie);
    ~mage();

    //méthodes
    int attaquer();

private:

};