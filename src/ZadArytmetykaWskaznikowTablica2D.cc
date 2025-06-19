/**
 * @file ZadArytmetykaWskaznikowTablica2D.cc
 * @brief Pokazanie kolejności adresowania tablicy dwuwymiarowej Tab[3][3]
 * @author Franciszek Niedziela
 */
// zadanie 3.10
#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int Tab[ROWS][COLS];

    cout << "Adresy elementów tablicy dwuwymiarowej Tab[3][3]:\n\n";

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << "Tab[" << i << "][" << j << "] = " << &Tab[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nAdres początku tablicy: " << Tab << endl;
    cout << "Adres Tab[0]: " << Tab[0] << endl;
    cout << "Adres Tab[0][0]: " << &Tab[0][0] << endl;

    /*
     * Komentarz:
     * 
     * Tablica dwuwymiarowa w C++ jest przechowywana w pamięci w sposób ciągły (row-major order).
     * Oznacza to, że kolejne elementy w wierszu są ułożone obok siebie w pamięci,
     * a kolejne wiersze następują po sobie.
     * 
     * Adres Tab[i][j] można wyrazić jako:
     *   adres_początku + (i * liczba_kolumn + j) * sizeof(element)
     * 
     * Wypisane adresy pokażą, że dla stałego i, adresy Tab[i][j] rosną wraz z j.
     * 
     * Przykład:
     * Tab[0][0], Tab[0][1], Tab[0][2] są kolejno obok siebie,
     * potem Tab[1][0], Tab[1][1], Tab[1][2], itd.
     */
    return 0;
}
// Output:
// Adresy elementów tablicy dwuwymiarowej Tab[3][3]:

// Tab[0][0] = 0x4d943ffbe0        Tab[0][1] = 0x4d943ffbe4        Tab[0][2] = 0x4d943ffbe8
// Tab[1][0] = 0x4d943ffbec        Tab[1][1] = 0x4d943ffbf0        Tab[1][2] = 0x4d943ffbf4
// Tab[2][0] = 0x4d943ffbf8        Tab[2][1] = 0x4d943ffbfc        Tab[2][2] = 0x4d943ffc00

// Adres początku tablicy: 0x4d943ffbe0
// Adres Tab[0]: 0x4d943ffbe0
// Adres Tab[0][0]: 0x4d943ffbe0
