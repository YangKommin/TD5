#pragma once
#include "equipement.h"
#include "tools.h"
#include "effet.h"

class armure : public equipement
{
	effet effetArmure;

public:
	armure();
	~armure();

	void choixArmure(int _choix);

	void DisplayStatArmure();

	int getResistance();

	void setResistance(int _resistance);

private:

protected:
	int resistance;
};

