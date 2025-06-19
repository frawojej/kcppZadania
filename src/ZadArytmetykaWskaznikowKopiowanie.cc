/**
 * @file ZadArytmetykaWskaznikowKopiowanie.cc
 * @brief Kopiowanie tablicy za pomocą wskaźników
 */
// zadanie 3.6
#include <iostream>
using namespace std;

// Funkcja kopiująca tablicę źródłową do docelowej za pomocą wskaźników
void kopiujTablice(const int* zrodlo, int* cel, int rozmiar) {
    const int* koniec = zrodlo + rozmiar;
    while (zrodlo < koniec) {
        *cel = *zrodlo;
        ++zrodlo;
        ++cel;
    }
}

int main() {
    int tablicaZrodlo[] = {1, 3, 5, 7, 9};
    int rozmiar = sizeof(tablicaZrodlo) / sizeof(tablicaZrodlo[0]);

    int tablicaCel[rozmiar] = {}; // tablica docelowa

    cout << "Tablica źródłowa: ";
    for (int i = 0; i < rozmiar; ++i) cout << tablicaZrodlo[i] << " ";
    cout << endl;

    // Kopiowanie tablicy
    kopiujTablice(tablicaZrodlo, tablicaCel, rozmiar);

    cout << "Tablica docelowa po kopiowaniu: ";
    for (int i = 0; i < rozmiar; ++i) cout << tablicaCel[i] << " ";
    cout << endl;

    return 0;
}
// Output:
// Tablica źródłowa: 1 3 5 7 9 
// Tablica docelowa po kopiowaniu: 1 3 5 7 9
