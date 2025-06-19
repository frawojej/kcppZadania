/**
 * @file ZadPrzekazywanieTablicKopia.cc
 * @brief Przekazywanie kopii tablicy do funkcji za pomocą std::vector
 */
// zadanie 2.7
#include <iostream>
#include <vector>
using namespace std;

// Funkcja przyjmująca kopię tablicy w postaci vectora
void wypiszTablice(vector<int> tab) {
    cout << "Elementy tablicy (kopii): ";
    for (int val : tab) {
        cout << val << " ";
    }
    cout << endl;

    // Modyfikacja kopii (nie wpływa na oryginał)
    if (!tab.empty()) {
        tab[0] = 999;
        cout << "Po zmianie pierwszego elementu w kopii: ";
        for (int val : tab) cout << val << " ";
        cout << endl;
    }
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    // Tworzymy vectora z tablicy - kopia danych
    vector<int> kopia(tablica, tablica + rozmiar);

    cout << "Tablica oryginalna: ";
    for (int val : kopia) cout << val << " ";
    cout << endl;

    // Przekazujemy kopię do funkcji
    wypiszTablice(kopia);

    cout << "Tablica oryginalna po wywołaniu funkcji: ";
    for (int val : kopia) cout << val << " ";
    cout << endl;

    return 0;
}
// Output:
// Tablica oryginalna: 1 2 3 4 5 
// Elementy tablicy (kopii): 1 2 3 4 5
// Po zmianie pierwszego elementu w kopii: 999 2 3 4 5
// Tablica oryginalna po wywołaniu funkcji: 1 2 3 4 5
