/**
 * @file ZadPrzekazywanieTablicZpodaniemRozmiaru.cc
 * @brief Przekazywanie tablicy do funkcji z podaniem rozmiaru
 */
// zadanie 2.6
#include <iostream>
using namespace std;

// Funkcja wypisująca elementy tablicy, rozmiar podany jako argument
void wypiszTablice(const int* tab, int rozmiar) {
    cout << "Elementy tablicy: ";
    for (int i = 0; i < rozmiar; ++i) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

int main() {
    int tablica[] = {10, 20, 30, 40, 50};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    wypiszTablice(tablica, rozmiar);

    return 0;
}
// Output:
// Elementy tablicy: 10 20 30 40 50
