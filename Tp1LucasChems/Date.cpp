#include <iostream>
#include "Date.h"

using namespace std;

Date::Date()
{
	jour = 6;
	mois = 10;
	annee = 2023;
}

bool Date::modifier(int newJour, int newMois, int newAnnee)
{
	if (valide(newJour, newMois, newAnnee))
	{
		jour = newJour;
		mois = newMois;
		annee = newAnnee;
		return true;
	}
	return false;
}

void Date::affiche()const
{
	cout << jour << "/" << mois << "/" << annee;
}

bool Date::valide(int j, int m, int a)
{
	if (m < 1 || m > 12)
		return false;

	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	if (m == 2 && (a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)))
		daysInMonth[2] = 29;

	if (j < 1 || j > daysInMonth[m])
		return false;

	if (a < 1)
		return false;

	return true;
}
