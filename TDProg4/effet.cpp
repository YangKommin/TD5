#include "effet.h"

effet::effet()
{
	typeEffet type = monocible;
	range = 1;
	nom = "Soins";
	puissance = 1;
	duree = 10;
}

effet::~effet()
{
}

void effet::Soins()
{
	puissance = 10;
	monHeros->SetPV(++puissance);
}
