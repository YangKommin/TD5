#pragma once
#include <iostream>
#include "entite.h"
#include "heros.h"

using namespace std;

class effet : public entite
{
	heros* monHeros;

public:
	effet();
	~effet();

	enum class typeEffet
	{
		aoe,
		multicible,
		monocible
	};

	void Soins();

	int getRange();
	void getTypeEffet(int _effet);
	std::string getNom();
	int getPuissance();
	int getDuree();

	void setRange(int _range);
	void setTypeEffet(int _effet);
	void setNom(std::string _nom);
	void setPuissance(int _puissance);
	void setDuree(int _duree);

private:
	
protected:
	int range;
	std::string nom;
	int puissance;
	int duree;
};