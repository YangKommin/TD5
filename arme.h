#pragma once
#include "equipement.h"
#include "tools.h"
#include "effet.h"

class arme : public equipement
{
	effet effetArme;

public:
	arme();
	~arme();

	int attaque();
	void choixArme(int _choix);

	void DisplayStatArmes();

private:

protected:
	int damage;
};

