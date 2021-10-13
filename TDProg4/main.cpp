#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "archer.h"
#include "heros.h"

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

	heros monHeros;
	archer monArcher12;
	archer monArcher("Archer", 1250, 125, 12, 21, 23, true);
	personnage monPerso;

	unsigned long xp = monHeros.GetMyxp();
	int level(0);
	char win;
	int val;

	monArcher.DisplayStat();
	cout << endl;
	monArcher12.DisplayStat();

	while (true)
	{

	}

	return 1;
}