/**
 * @file ZadArytmetykaWskaznikowTabliceA.cc
 * @brief Operacje na tablicy za pomocą wskaźników: suma, max, odwrócenie kolejności
 * @author Franciszek Niedziela
 */
// zadanie 3.8
#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 10;
    int tablica[ROZMIAR];

    // Wypełnienie tablicy wartościami od 1 do 10
    for (int i = 0; i < ROZMIAR; ++i) {
        tablica[i] = i + 1;
    }

    // Obliczanie sumy elementów za pomocą wskaźników
    int suma = 0;
    int* ptr = tablica;
    int* koniec = tablica + ROZMIAR;
    while (ptr < koniec) {
        suma += *ptr;
        ++ptr;
    }
    cout << "Suma elementów tablicy: " << suma << endl;

    // Znalezienie maksymalnego elementu za pomocą wskaźników
    int* maxPtr = tablica;
    ptr = tablica + 1;
    while (ptr < koniec) {
        if (*ptr > *maxPtr) {
            maxPtr = ptr;
        }
        ++ptr;
    }
    cout << "Maksymalny element tablicy: " << *maxPtr << endl;

    // Odwrócenie kolejności elementów tablicy za pomocą wskaźników (bez indeksów)
    int* lewy = tablica;
    int* prawy = tablica + ROZMIAR - 1;
    while (lewy < prawy) {
        int temp = *lewy;
        *lewy = *prawy;
        *prawy = temp;
        ++lewy;
        --prawy;
    }

    // Wyświetlenie odwróconej tablicy
    cout << "Tablica po odwróceniu kolejności: ";
    ptr = tablica;
    while (ptr < koniec) {
        cout << *ptr << " ";
        ++ptr;
    }
    cout << endl;

    return 0;
}
// Output:
// Suma elementów tablicy: 55
// Maksymalny element tablicy: 10
// Tablica po odwróceniu kolejności: 10 9 8 7 6 5 4 3 2 1
