#pragma once
#include <iostream>
#include "entite.h"

class personnage : public entite
{
public:
	personnage(); // constructeur de base
	personnage(std::string _nom,
				int _pv,
				int _mana,
				int _force,
				int _intelligence,
				int _agility,
				bool _allie); // constructeur de base pour les stats et le nom des personnages 
	~personnage(); // déconstruteur

	bool gainNiveau(); // booléen pour savoir si le personnage joueur est passé au niveau supérieur
	void DisplayStat(); // affichage des stats
	void ChangeStat(); // changement des stats

	// Getter

	std::string GetNom();
	int GetNiveau();
	int GetPV();
	int GetMana();
	int GetForce();
	int GetIntelligence();
	int GetAgility();
	unsigned long GetMyxp();
	unsigned long GetXpNeed();

	// Setter

	void SetNom(std::string _nom);
	void SetNiveau(int _niveau);
	void SetPV(int _pv);
	void SetMana(int _mana);
	void SetForce(int _force);
	void SetIntelligence(int _intelligence);
	void SetAgility(int _agilite);
	void SetMyxp(unsigned long _Myxp);
	void SetXpNeed(unsigned long _Xpneed);

private:
	unsigned long xp[10]; // tableau pour la quantité d'expérience nécessaire afin de passer au niveau supérieur
	unsigned long xpNeed; // nombre de points d'expérience nécessaire
	unsigned niveaulimit; // définit le niveau maximum du personnage joueur
	unsigned long myxp; // définit le nombre de points d'expérience actuel du personnage joueur
	int compteur; // compteur pour faire incrémenter le tableau de niveau

protected:
	std::string nom; // nom du personnage et peut etre des ennemis
	int niveau; // niveau des héros
	int pv; // pv des personnages
	int mana; // mana du perso
	int force; // point de force des unitées
	int intelligence; // point d'intelligence des unitées
	int agility; // point d'agilité des unitées
	bool allie; // ami ou ennemi ?
};