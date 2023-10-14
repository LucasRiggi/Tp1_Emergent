#ifndef _classePersonne_H
#define _classePersonne_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "Date.h"

class Personne
{
protected:
   string nom;
   string prenom;
   char sexe;
   Date naissance;

public:
   Personne(const std::string &nom, const std::string &prenom, char sexe);

   friend std::istream &operator>>(std::istream &input, Personne &personne);

   friend std::ostream &operator<<(std::ostream &output, const Personne &personne);
};

#endif
