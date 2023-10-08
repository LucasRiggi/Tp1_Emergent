// Tp1LucasChems.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
void trierTab(int *tab, int taille);
void afficherTab(int *tab, int taille);
bool egalite(int tab1[], int tab2[], int taille);
bool egalitePtr(int *tab1, int *tab2, int taille);
int *concatenerTab(int *tab1, int *tab2, int taille);

int main()
{
    const int NB_ELEMENTS = 10;
    int tableau1[] = {22, 44, 12, 61, 4, 99, 33, 17, 15, 123};
    int tableau2[] = {22, 33, 44, 61, 4, 99, 12, 17, 123, 15};
    int tableau3[] = {22, 44, 12, 61, 4, 99, 33, 17, 15, 123};
    // A
    int *tableau4 = concatenerTab(tableau1, tableau2, NB_ELEMENTS);
    // B
    afficherTab(&tableau1[0], NB_ELEMENTS);
    afficherTab(&tableau2[0], NB_ELEMENTS);
    afficherTab(&tableau3[0], NB_ELEMENTS);
    afficherTab(&tableau4[0], NB_ELEMENTS + NB_ELEMENTS);
    // C
    egalite(tableau1, tableau2, NB_ELEMENTS);
    egalite(tableau1, tableau3, NB_ELEMENTS);
    // D
    egalitePtr(&tableau1[0], &tableau2[0], NB_ELEMENTS);
    egalitePtr(&tableau1[0], &tableau3[0], NB_ELEMENTS);
    // E
    trierTab(&tableau1[0], NB_ELEMENTS);
    trierTab(&tableau2[0], NB_ELEMENTS);
    trierTab(&tableau3[0], NB_ELEMENTS);
    trierTab(&tableau4[0], NB_ELEMENTS + NB_ELEMENTS);
    // F
    afficherTab(&tableau1[0], NB_ELEMENTS);
    afficherTab(&tableau2[0], NB_ELEMENTS);
    afficherTab(&tableau3[0], NB_ELEMENTS);
    afficherTab(&tableau4[0], NB_ELEMENTS + NB_ELEMENTS);
    // G
    egalitePtr(&tableau1[0], &tableau2[0], NB_ELEMENTS);
    egalitePtr(&tableau1[0], &tableau3[0], NB_ELEMENTS);

    return 0;
}

void trierTab(int *tab, int taille)
{

    int i, j, t;
    for (i = 0; i < taille; i++)
    {

        for (j = i + 1; j < taille; j++)
        {

            if (*(tab + j) < *(tab + i))
            {

                t = *(tab + i);
                *(tab + i) = *(tab + j);
                *(tab + j) = t;
            }
        }
    }
}

void afficherTab(int *tab, int taille)
{
    cout << "Les valeurs sont : ";
    for (int i = 0; i < taille; i++)
    {
        cout << *tab << " ";
        tab++;
    }
}

bool egalite(int tab1[], int tab2[], int taille)
{
    bool reponse = false;
    int i;

    for (i = 0; i < taille; i++)
    {
        if (tab1[i] == tab2[i])
        {
            reponse = true;
        }
        else
        {
            cout << "pas egale " << endl;
            reponse = false;
            break;
        }
    }
    if (reponse)
    {
        cout << "egale " << endl;
    }
    return reponse;
}
// 4
bool egalitePtr(int *tab1, int *tab2, int taille)
{
    bool reponse = true;
    for (int i = 0; i < taille; i++)
    {
        if (*tab1 != *tab2)
        {
            cout << "pas egale " << endl;
            reponse = false;
            break;
        }
        tab1++;
        tab2++;
    }
    if (reponse)
    {
        cout << "egale " << endl;
    }
    return reponse;
}

int *concatenerTab(int *tab1, int *tab2, int taille)
{
    int taille2 = taille + taille;
    int *tab4 = new int[taille2];

    // Copy elements from tab1
    for (int i = 0; i < taille; i++)
    {
        tab4[i] = tab1[i];
    }

    // Copy elements from tab2
    for (int i = 0; i < taille; i++)
    {
        tab4[taille + i] = tab2[i];
    }

    return tab4;
}
