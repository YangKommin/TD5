#pragma once
#include <iostream>
#include "entite.h"
#include "heros.h"

class effet : public entite
{
	heros* monHeros;

public:
	effet();
	~effet();

	void Soins();

private:

protected:
	enum typeEffet
	{
		aoe,
		multicible,
		monocible
	};
	int range;
	std::string nom;
	int puissance;
	int duree;
};