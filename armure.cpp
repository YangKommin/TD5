#include "armure.h"

armure::armure()
{
	resistance = 10;
}

armure::~armure()
{
}

void armure::choixArmure(int _choix)
{
	int armureChoisi;
	ARMURES monArmure{ ARMURES(_choix) };
	switch (_choix)
	{
	case 0:
		armureChoisi = static_cast<int>(monArmure);
		resistance = 20;
		effetArmure.setNom("Armure de Glace");
		durabilite = 20;
		cout << "Vous possedez a present armure de glace" << endl;
		break;
	case 1:
		armureChoisi = static_cast<int>(monArmure);
		cout << "Vous possedez a present une armure invisible !!!! (ca veut dire rien)" << endl;
		resistance = 0;
		durabilite = 0;
		break;
	default:
		cerr << "veuillez choisir entre 0 et 1!" << endl;
		break;
	}
}

void armure::DisplayStatArmure()
{
	cout << "Nom de l'armure : " << effetArmure.getNom() << endl;
	cout << "Resistance de l'armure : " << getResistance() << endl;
	cout << "Durabilite de l'armure : " << getDurabilite() << endl;
}

int armure::getResistance()
{
	return resistance;
}

void armure::setResistance(int _resistance)
{
	resistance = _resistance;
}
