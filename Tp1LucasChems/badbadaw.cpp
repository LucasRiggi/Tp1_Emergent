

#include <iostream>
using namespace std;

void minEtMax(int *tab, int taille, int &min, int &max);
int somme(int *tab, int taille);

int main()
{

    int *tableau;
    int n = 3;

    cout << "Combien de cases voulez-vous?";
    // cin >> n;

    tableau = new int[n];

    tableau[0] = 1;
    tableau[1] = 2;
    tableau[2] = 3;

    cout << somme(tableau, n) << endl;

    delete[] tableau;
    return 0;
}
int somme(int *tab, int taille)
{
    int somme = 0;
    for (int *ptr = tab; ptr < tab + taille; ptr++)
    {
        somme += *ptr;
    }
    /*
    for (int i = 0; i < taille; i++) {
        somme += tab[i];
    }
    */
    return somme;
}

int main1()
{

    int valeurs[5];
    valeurs[0] = 3;
    valeurs[1] = 56;
    valeurs[2] = -12;
    valeurs[3] = 4;
    valeurs[4] = 13;

    int min;
    int max;

    minEtMax(valeurs, 5, min, max);
    cout << "min : " << min << endl;
    cout << "max : " << max << endl;

    return 0;
}

void minEtMax(int *tab, int taille, int &min, int &max)
{
    min = tab[0];
    max = tab[0];

    for (int i = 1; i < taille; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
        if (tab[i] > max)
        {
            max = tab[i];
        }
    }
}