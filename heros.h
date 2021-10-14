#pragma once
#include "personnage.h"
#include "arme.h"
#include "armure.h"
#include "consommable.h"

class heros : public personnage
{
	arme HerosArme;
	armure HerosArmure;

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

	void EquipementDuHeros();
	void HerosAttaque(heros &cible);
	void DisplayEquipement();

	// Getters
	int getSorts();

	// Setters
	void setSorts(int _sorts);

private:
	int sorts;

protected:

};