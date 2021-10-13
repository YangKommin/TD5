#pragma once
#include "personnage.h"

class heros : public personnage
{
public:
	heros();
	heros(std::string _nom,
		int _niveau,
		int _pv,
		int _mana,
		int _force,
		int _intelligence,
		int _agility,
		bool _allie);
	~heros();

	// Getters
	int getSorts();

	// Setters
	void setSorts(int _sorts);

private:
	int sorts;

protected:

};