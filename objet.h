#pragma once
#include "entite.h"
#include <iostream>

using namespace std;


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

