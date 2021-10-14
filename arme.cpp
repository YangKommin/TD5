#include "arme.h"

arme::arme()
{
	damage = 10;
}

arme::~arme()
{
}

int arme::attaque()
{
	if (effetArme.getNom() == "DeuilleGivre")
	{
		damage = 1000;
		return damage;
	}
}

void arme::choixArme(int _choix)
{
	int armeChoisi;
	ARMES arme{ ARMES(_choix) };
	switch (_choix)
	{
	case 0:
		armeChoisi = static_cast<int>(arme);
		effetArme.setPuissance(50);
		effetArme.setNom("DeuilleGivre");
		effetArme.setTypeEffet(2);
		effetArme.setRange(5);
		effetArme.setDuree(10);
		cout << "Vous possedez a present Deuillegivre" << endl;
		break;
	case 1:
		armeChoisi = static_cast<int>(arme);
		effetArme.setPuissance(0);
		effetArme.setNom("Epee invisible !");
		cout << "Vous possedez a present une epee invisible !!! (en gros ca veut dire que t'as pas d'epee)" << endl;
		break;
	default:
		cerr << "veuillez choisir entre 0 et 1!" << endl;
		break;
	}
}

void arme::DisplayStatArmes()
{
	cout << "Nom de l'arme : " << effetArme.getNom() << endl;
	cout << "Duree de l'utilisation de l'arme : " << effetArme.getDuree() << endl;
	cout << "Puissance de l'arme : " << effetArme.getPuissance() * damage << endl;
	cout << "Portee de l'arme : " << effetArme.getRange() << endl;
	cout << "Effet de l'arme : "; effetArme.getTypeEffet(2);
	cout << "Durabilite de l'arme : " << "Infinie" << endl;
}