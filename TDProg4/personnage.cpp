#include <iostream>
#include "personnage.h"

using namespace std;

personnage::personnage()
{
	nom = "Monperso";
	niveau = 0;
	pv = 100;
	mana = 50;
	force = 10;
	intelligence = 10;
	agility = 10;
	xpNeed = 1000;
	// niveaux
	for (unsigned long i = 0; i < 10; ++i)
	{
		xp[i] = xpNeed + xpNeed * i;
	}
	
	niveaulimit = 10;
	myxp = 0;

	compteur = 0;

	allie = true;
}

personnage::personnage(std::string _nom,
						int _pv,
						int _mana,
						int _force,
						int _intelligence,
						int _agility,
						bool _allie)
{
	nom = _nom;
	niveau = 0;
	pv = _pv;
	mana = _mana;
	force = _force;
	intelligence = _intelligence;
	agility = _agility;
	xpNeed = 1000;
	// niveaux
	for (unsigned long i = 0; i < 10; ++i)
	{
		xp[i] = xpNeed + xpNeed * i;
	}

	niveaulimit = 10;
	myxp = 0;

	compteur = 0;

	allie = _allie;
}

personnage::~personnage() {}

bool personnage::gainNiveau()
{
	if (myxp >= xpNeed && niveau <= niveaulimit - 1)
	{
		xpNeed = xp[++compteur];
		return true;
	}
	return false;
} // Gain de niveau

void personnage::DisplayStat()
{
	cout << "Nom : " << GetNom() << endl;
	cout << "Niveau : " << GetNiveau() << endl;
	cout << "PV : " << GetPV() << endl;
	cout << "Mana : " << GetMana() << endl;
	cout << "Force : " << GetForce() << endl;
	cout << "Intelligence : " << GetIntelligence() << endl;
	cout << "Agilite : " << GetAgility() << endl;
	cout << "Xp : " << GetMyxp() << " / " << GetXpNeed() << endl;
} 	// Accesseurs pour recuperer les donnees...

void personnage::ChangeStat()
{
	std::string changeNom;
	int changeNiveau;
	int changePV;
	int changeMana;
	int changeForce;
	int changeIntelligence;
	int changeAgility;
	cout << "Desormais vous vous appelerez... "; cin >> changeNom; SetNom(changeNom); cout << endl;
	cout << "Mais... A quel niveau d'experience pensez-vous etre ? "; cin >> changeNiveau; SetNiveau(changeNiveau); cout << endl;
	cout << "Combien de PV possedez-vous ? "; cin >> changePV; SetPV(changePV); cout << endl;
	cout << "Combien de mana possedez-vous ? "; cin >> changeMana; SetMana(changeMana); cout << endl;
	cout << "Definissez votre force : "; cin >> changeForce; SetForce(changeForce); cout << endl;
	cout << "Votre intelligence : "; cin >> changeIntelligence; SetIntelligence(changeIntelligence); cout << endl;
	cout << "Et votre agilite : "; cin >> changeAgility; SetAgility(changeAgility); cout << endl;
	cout << "\n" << "Vos Stats : " << endl;
	DisplayStat();
}	// Mutateurs pour modifier les donnees...


// Accesseurs //

std::string personnage::GetNom()
{
	return nom;
}

int personnage::GetNiveau()
{
	return niveau;
}

int personnage::GetPV()
{
	return pv;
}

int personnage::GetMana()
{
	return mana;
}

int personnage::GetForce()
{
	return force;
}

int personnage::GetIntelligence()
{
	return intelligence;
}

int personnage::GetAgility()
{
	return agility;
}

unsigned long personnage::GetMyxp()
{
	return myxp;
}

unsigned long personnage::GetXpNeed()
{
	return xpNeed;
}

// Mutateurs //

void personnage::SetNom(std::string _nom)
{
	nom = _nom;
}

void personnage::SetNiveau(int _niveau)
{
	niveau = _niveau;
}

void personnage::SetPV(int _pv)
{
	pv = _pv;
}

void personnage::SetMana(int _mana)
{
	mana = _mana;
}

void personnage::SetForce(int _force)
{
	force = _force;
}

void personnage::SetIntelligence(int _intelligence)
{
	intelligence = _intelligence;
}

void personnage::SetAgility(int _agility)
{
	agility = _agility;
}

void personnage::SetMyxp(unsigned long _Myxp)
{
	myxp = _Myxp;
}

void personnage::SetXpNeed(unsigned long _Xpneed)
{
	xpNeed = _Xpneed;
}