/**
 * @file ZadArytmetykaWskaznikowSuma.cc
 * @brief Sumowanie elementów tablicy za pomocą wskaźników
 */
// zadanie 3.2
#include <iostream>
using namespace std;

// Funkcja sumująca elementy tablicy
int suma(const int* tab, int rozmiar) {
    int suma = 0;
    for (int i = 0; i < rozmiar; ++i) {
        suma += *(tab + i); // lub tab[i]
    }
    return suma;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << "Suma elementów tablicy: " << suma(tablica, rozmiar) << endl;

    return 0;
}
// Output:
// Suma elementów tablicy: 15
