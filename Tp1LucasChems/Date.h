#ifndef _classeDate_H
#define _classeDate_H

#include <iostream>
#include <string>
using namespace std;

class Date
{
private:
    bool valide(int newJour, int newMois, int newAnnee);

protected:
    int jour, mois, annee;

public:
    Date();

    bool modifier(int newJour, int newMois, int newAnnee);

    void affiche() const;
};

#endif
