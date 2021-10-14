#include "equipement.h"

equipement::equipement()
{
	durabilite = 10;
}

equipement::~equipement()
{
}

int equipement::getDurabilite()
{
	return durabilite;
}

void equipement::setDurabilite(int _durabilite)
{
	durabilite = _durabilite;
}
