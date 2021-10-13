#pragma once
#include "entite.h"
class objet : public entite
{
public:
	objet();
	~objet();
private:

protected:
	int taille;
	int poids;
};

