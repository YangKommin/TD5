#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "archer.h"
#include "heros.h"
#include "arme.h"
#include "armure.h"
#include "consommable.h"
#include "tools.h"

using namespace std;

void Niveau()
{
	/*if ( == 'k')
	{
		system("CLS");
		xp = xp + 100;
		monPerso.SetMyxp(xp);
		if (monPerso.gainNiveau())
		{
			monPerso.SetNiveau(++level);
		}
		monPerso.DisplayStat();
	}*/
}

int main()
{
	srand(time(NULL));

	heros monHeros("Arthas",0,2000,100,10,20,15,true);
	heros ennemiHeros("Un Monstre...",0,3000,21,23,12,21,false);
	arme monArme;
	armure monArmure;
	consommable mesConsommables;

	unsigned long xp = monHeros.GetMyxp();
	int level(0);
	char win;
	int val;
	int val2;
	int val3;
	string objet;

	monHeros.DisplayEquipement();
	cout << endl;

	monHeros.EquipementDuHeros();
	monHeros.DisplayEquipement();
	cout << endl;
	monHeros.DisplayStat();
	ennemiHeros.DisplayStat();
	cout << endl;

	monHeros.HerosAttaque(ennemiHeros);
	monHeros.DisplayStat();
	ennemiHeros.DisplayStat();

	while (true)
	{
		
	}

	return 1;
}