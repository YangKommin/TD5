#include "consommable.h"

consommable::consommable()
{
	durabilite = 10;
	quantite = 2;
	duree = 12;
}

consommable::~consommable()
{
}

void consommable::choixConsommable(int _choix)
{
	int consoChoisi;
	CONSOMMABLES conso{ CONSOMMABLES(_choix) };
	switch (_choix)
	{
	case 0:
		consoChoisi = static_cast<int>(conso);
		cout << "Vous possedez a present une Potion de Vie" << endl;
		break;
	case 1:
		consoChoisi = static_cast<int>(conso);
		cout << "Vous possedez a present une Potion de Mana" << endl;
		break;
	default:
		cerr << "veuillez choisir entre 0 et 1!" << endl;
		break;
	}
}
