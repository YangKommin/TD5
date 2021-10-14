#pragma once
#include "objet.h"
#include "tools.h"

class equipement : public objet
{
public:
	equipement();
	~equipement();

	int getDurabilite();

	void setDurabilite(int _durabilite);

private:

protected:
	int durabilite;
};