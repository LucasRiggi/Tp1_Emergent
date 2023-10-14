#include <iostream>
#include "Date.h"
#include "Personne.h"

using namespace std;
int main() {
    Personne personne("Riggi", "Louacas", 'M');
    std::cout << "Personne information:\n" << personne;

    std::cin >> personne;

    std::cout << "Personne information:\n" << personne;

    return 0;
}
