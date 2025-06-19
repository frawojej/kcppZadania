/**
 * @file ZadStudent/LSilnia.cc
 * @brief Obliczanie silni oraz sumy silni od 1 do n z walidacją liczby nieujemnej
 * @author Franciszek Niedziela
 */
// zadanie 4.12
#include <iostream>
using namespace std;

int main() {
    int liczba;

    cout << "Podaj liczbe do obliczenia silni (nieujemna): ";
    cin >> liczba;

    if (liczba < 0) {
        cout << "Blad: silnia jest zdefiniowana tylko dla liczb nieujemnych!" << endl;
        return 1;
    }

    long long silnia = 1;           // silnia dla pojedynczej liczby
    long long suma_silni = 0;       // suma silni od 1 do n

    for (int i = 1; i <= liczba; i++) {
        silnia *= i;
        suma_silni += silnia;
    }

    cout << "Silnia z " << liczba << " wynosi: " << silnia << endl;
    cout << "Suma silni od 1 do " << liczba << " wynosi: " << suma_silni << endl;

    return 0;
}
// Output:
// Podaj liczbe do obliczenia silni (nieujemna): 8
// Silnia z 8 wynosi: 40320
// Suma silni od 1 do 8 wynosi: 46233
