#include "effet.h"

effet::effet()
{
	typeEffet type{ typeEffet::monocible };
	range = 1;
	nom = "effets";
	puissance = 1;
	duree = 10;
}

effet::~effet()
{
}

void effet::Soins()
{
	nom = "Soins";
	puissance = 10;
	monHeros->SetPV(++puissance);
}

int effet::getRange()
{
	return range;
}

void effet::getTypeEffet(int _effet)
{
	int effet;
	typeEffet effetObjet{ typeEffet(_effet) };
	switch (_effet)
	{
	case 0:
		effet = static_cast<int>(effetObjet);
		cout << "effet de zone" << endl;
		break;
	case 1:
		effet = static_cast<int>(effetObjet);
		cout << "cible plusieurs personnages" << endl;
		break;
	case 2:
		effet = static_cast<int>(effetObjet);
		cout << "cible un seul personnage" << endl;
		break;
	default:
		cerr << "veuillez choisir entre 0, 1 et 2!" << endl;
		break;
	}
}

std::string effet::getNom()
{
	return nom;
}

int effet::getPuissance()
{
	return puissance;
}

int effet::getDuree()
{
	return duree;
}

void effet::setRange(int _range)
{
	range = _range;
}

void effet::setTypeEffet(int _effet)
{
	switch (_effet)
	{
	case 0:
		typeEffet{ typeEffet::aoe };
		break;
	case 1:
		typeEffet{ typeEffet::multicible };
		break;
	case 2:
		typeEffet{ typeEffet::monocible };
		break;
	default:
		cerr << "veuillez choisir entre 0, 1 et 2!" << endl;
		break;
	}
}

void effet::setNom(std::string _nom)
{
	nom = _nom;
}

void effet::setPuissance(int _puissance)
{
	puissance = _puissance;
}

void effet::setDuree(int _duree)
{
	duree = _duree;
}
