/**
 * @file LBitoweOperatoryLogiczneSingleVariable.cc
 * @brief Konwersja tablicy 8 elementów (0/1) na liczbę binarną
 * @author Franciszek Niedziela
 */
// zadanie 3.15
#include <iostream>
using namespace std;

// Funkcja wyświetlająca liczbę w postaci binarnej (8 bitów)
void printBinary(unsigned char val, int range = 7) {
    for (int i = range; i >= 0; i--) {
        cout << ((val & (1 << i)) ? '1' : '0');
    }
    cout << endl;
}

int main() {
    const int SIZE = 8;
    int tab[SIZE];

    cout << "Podaj 8 elementów tablicy (0 lub 1), odpowiadających bitom liczby (od bitu 7 do bitu 0):" << endl;
    for (int i = 0; i < SIZE; ++i) {
        while (true) {
            cout << "Bit " << (SIZE - 1 - i) << ": ";
            cin >> tab[i];
            if (tab[i] == 0 || tab[i] == 1) break;
            cout << "Błąd: podaj 0 lub 1." << endl;
        }
    }

    unsigned char wynik = 0;

    // Budujemy liczbę bit po bicie
    // tab[0] to bit 7 (najstarszy), tab[7] to bit 0 (najmłodszy)
    for (int i = 0; i < SIZE; ++i) {
        if (tab[i] == 1) {
            wynik |= (1 << (SIZE - 1 - i));
        }
    }

    cout << "Liczba w postaci binarnej: ";
    printBinary(wynik);

    cout << "Liczba w systemie dziesiętnym: " << static_cast<int>(wynik) << endl;

    return 0;
}
// Input:
// Podaj 8 elementów tablicy (0 lub 1), odpowiadających bitom liczby (od bitu 7 do bitu 0):
// Bit 7: 0
// Bit 6: 0
// Bit 5: 1
// Bit 4: 1
// Bit 3: 1
// Bit 2: 0
// Bit 1: 1 
// Bit 0: 
// 0

// Output:
// Liczba w postaci binarnej: 00111010
// Liczba w systemie dziesiętnym: 58
