/**
 * @file ZadArytmetykaWskaznikowRoznica.cc
 * @brief Obliczanie różnicy między dwoma wskaźnikami wskazującymi na elementy tablicy
 */
// zadanie 3.5
#include <iostream>
using namespace std;

int main() {
    // Definicja tablicy 10 liczb całkowitych
    int tablica[10] = {5, 8, 12, 3, 17, 9, 21, 4, 6, 10};

    // Wskaźniki na różne elementy tablicy
    int* wsk1 = &tablica[2]; // wskazuje na element o indeksie 2 (12)
    int* wsk2 = &tablica[7]; // wskazuje na element o indeksie 7 (4)

    // Obliczenie różnicy między wskaźnikami
    ptrdiff_t roznica = wsk2 - wsk1;

    cout << "Element wskazywany przez wsk1: " << *wsk1 << " (adres: " << wsk1 << ")" << endl;
    cout << "Element wskazywany przez wsk2: " << *wsk2 << " (adres: " << wsk2 << ")" << endl;
    cout << "Różnica między wskaźnikami wsk2 - wsk1 wynosi: " << roznica << endl;
    cout << "(oznacza to, że wsk2 jest przesunięty o " << roznica << " elementy tablicy względem wsk1)" << endl;

    return 0;
}
// Output:
// Element wskazywany przez wsk1: 12 (adres: 0x3eb5bff6a8)
// Element wskazywany przez wsk2: 4 (adres: 0x3eb5bff6bc)
// Różnica między wskaźnikami wsk2 - wsk1 wynosi: 5
// (oznacza to, że wsk2 jest przesunięty o 5 elementy tablicy względem wsk1)
