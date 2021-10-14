#pragma once
#include "equipement.h"
#include "tools.h"
#include "effet.h"

class consommable : public equipement
{
	effet effetConso;

public:
	consommable();
	~consommable();

	void choixConsommable(int _choix);

private:

protected:
	int duree;
	int quantite;
};

