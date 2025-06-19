/**
 * @file ZadArytmetykaWskaznikowZnajdowanie.cc
 * @brief Znajdowanie największego elementu w tablicy za pomocą wskaźników
 */
// zadanie 3.3
#include <iostream>
using namespace std;

// Funkcja zwracająca wskaźnik do największego elementu w tablicy
int* maxElement(int* tab, int rozmiar) {
    if (tab == nullptr || rozmiar <= 0)
        return nullptr;

    int* maxPtr = tab;
    for (int i = 1; i < rozmiar; ++i) {
        if (*(tab + i) > *maxPtr) {
            maxPtr = tab + i;
        }
    }
    return maxPtr;
}

int main() {
    int tablica[] = {3, 7, 2, 9, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    int* maxPtr = maxElement(tablica, rozmiar);

    if (maxPtr != nullptr) {
        cout << "Największy element w tablicy to: " << *maxPtr << endl;
        cout << "Znajduje się pod adresem: " << maxPtr << endl;
    } else {
        cout << "Tablica jest pusta lub wskaźnik jest nieprawidłowy." << endl;
    }

    return 0;
}
// Output:
// Największy element w tablicy to: 9
// Znajduje się pod adresem: 0xeaae5ffd5c
