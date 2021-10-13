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
	~personnage(); // d�construteur

	bool gainNiveau(); // bool�en pour savoir si le personnage joueur est pass� au niveau sup�rieur
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
	unsigned long xp[10]; // tableau pour la quantit� d'exp�rience n�cessaire afin de passer au niveau sup�rieur
	unsigned long xpNeed; // nombre de points d'exp�rience n�cessaire
	unsigned niveaulimit; // d�finit le niveau maximum du personnage joueur
	unsigned long myxp; // d�finit le nombre de points d'exp�rience actuel du personnage joueur
	int compteur; // compteur pour faire incr�menter le tableau de niveau

protected:
	std::string nom; // nom du personnage et peut etre des ennemis
	int niveau; // niveau des h�ros
	int pv; // pv des personnages
	int mana; // mana du perso
	int force; // point de force des unit�es
	int intelligence; // point d'intelligence des unit�es
	int agility; // point d'agilit� des unit�es
	bool allie; // ami ou ennemi ?
};