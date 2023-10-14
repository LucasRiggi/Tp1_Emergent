#include "Date.h"
#include "Personne.h"

Personne::Personne(const std::string &nom, const std::string &prenom, char sexe)
    : nom(nom), prenom(prenom), sexe(sexe) {}

std::istream &operator>>(std::istream &input, Personne &personne)
{
    std::cout << "Nom : ";
    input >> personne.nom;
    std::cout << "Prenom : ";
    input >> personne.prenom;
    std::cout << "Sexe : ";
    input >> personne.sexe;

    int jour, mois, annee;
    bool validDate = false;

    while (!validDate)
    {
        std::cout << "Date de naissance (format : JJ MM AAAA) : ";
        if (input >> jour >> mois >> annee)
        {
            validDate = personne.naissance.modifier(jour, mois, annee);
            if (!validDate)
            {
                std::cout << "Date de naissance invalide. Veuillez réessayer.\n";
            }
        }
        else
        {
            input.clear();
            std::string invalidInput;
            std::getline(input, invalidInput);
            std::cout << "Format de date incorrect. Veuillez réessayer.\n";
        }
    }

    return input;
}

std::ostream &operator<<(std::ostream &output, const Personne &personne)
{
    output << "Nom : " << personne.nom << "\n";
    output << "Prenom : " << personne.prenom << "\n";
    output << "Sexe : " << personne.sexe << "\n";
    output << "Date de naissance : ";
    personne.naissance.affiche();
    output << "\n";

    return output;
}
