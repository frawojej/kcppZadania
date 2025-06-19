/**
 * @file ZadArytmetykaWskaznikowTabliceB.cc
 * @brief Operacje na trzech tablicach float z użyciem wskaźników
 * @author Franciszek Niedziela
 */
// zadanie 3.9
#include <iostream>
using namespace std;

int main() {
    const int ROZMIAR = 5;
    float tab1[ROZMIAR];
    float tab2[ROZMIAR];
    float tab3[ROZMIAR];

    // Wypełnianie pierwszej tablicy wartościami podanymi przez użytkownika (za pomocą wskaźników)
    cout << "Podaj " << ROZMIAR << " wartości typu float dla pierwszej tablicy:" << endl;
    float* p1 = tab1;
    float* p1_end = tab1 + ROZMIAR;
    while (p1 < p1_end) {
        cin >> *p1;
        ++p1;
    }

    // Wypełnianie drugiej tablicy wartościami pierwszej tablicy pomnożonymi przez 2 (używając wskaźników)
    float* p_src = tab1;
    float* p_dst = tab2;
    float* p_dst_end = tab2 + ROZMIAR;
    while (p_dst < p_dst_end) {
        *p_dst = (*p_src) * 2.0f;
        ++p_src;
        ++p_dst;
    }

    // Tworzenie trzeciej tablicy jako sumy odpowiadających elementów z tab1 i tab2 (używając arytmetyki wskaźników)
    p_src = tab1;
    float* p_src2 = tab2;
    p_dst = tab3;
    p_dst_end = tab3 + ROZMIAR;
    while (p_dst < p_dst_end) {
        *p_dst = *p_src + *p_src2;
        ++p_src;
        ++p_src2;
        ++p_dst;
    }

    // Wyświetlanie zawartości wszystkich trzech tablic (używając wskaźników)
    cout << "\nZawartość tablic:\n";

    cout << "Tablica 1: ";
    p1 = tab1;
    p1_end = tab1 + ROZMIAR;
    while (p1 < p1_end) {
        cout << *p1 << " ";
        ++p1;
    }
    cout << endl;

    cout << "Tablica 2: ";
    p_dst = tab2;
    p_dst_end = tab2 + ROZMIAR;
    while (p_dst < p_dst_end) {
        cout << *p_dst << " ";
        ++p_dst;
    }
    cout << endl;

    cout << "Tablica 3 (suma): ";
    p_dst = tab3;
    p_dst_end = tab3 + ROZMIAR;
    while (p_dst < p_dst_end) {
        cout << *p_dst << " ";
        ++p_dst;
    }
    cout << endl;

    return 0;
}
// Input:
// Podaj 5 wartości typu float dla pierwszej tablicy:
// 2.5 5.76 3.45
// 6.34 234.43

// Output:
// Zawartość tablic:
// Tablica 1: 2.5 5.76 3.45 6.34 234.43
// Tablica 2: 5 11.52 6.9 12.68 468.86
// Tablica 3 (suma): 7.5 17.28 10.35 19.02 703.29
