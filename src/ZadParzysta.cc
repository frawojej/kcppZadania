/**
 * @file ZadParzysta.cc
 * @brief Sprawdzanie parzystości liczby trzema różnymi metodami
 *        (a) operacje bitowe (&)
 *        (b) modulo (%)
 *        (c) operator warunkowy (?:)
 * @author Franciszek Niedziela
 */
// zadanie 4.7
#include <iostream>
using namespace std;

// (a) Sprawdzenie parzystości za pomocą operacji bitowej &
// Przykład: liczba & 1 == 0 oznacza, że liczba jest parzysta
// np. 4 (binarnie 100) & 1 (001) = 0 -> parzysta
//     5 (binarnie 101) & 1 (001) = 1 -> nieparzysta
bool czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

// (b) Sprawdzenie parzystości za pomocą modulo
bool czyParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

// (c) Sprawdzenie parzystości z użyciem operatora warunkowego (?:)
// Zwraca true jeśli parzysta, false jeśli nieparzysta
bool czyParzystaWarunkowo(int liczba) {
    // Można też użyć if z warunkiem: (liczba % 2 == 0) ? true : false
    return ( (liczba & 1) == 0 ) ? true : false;
}

int main() {
    int liczba;

    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    cout << "Sprawdzenie parzystości liczby " << liczba << ":\n";

    cout << "(a) Operacje bitowe: ";
    cout << (czyParzystaBitowo(liczba) ? "Parzysta" : "Nieparzysta") << endl;

    cout << "(b) Modulo: ";
    cout << (czyParzystaModulo(liczba) ? "Parzysta" : "Nieparzysta") << endl;

    cout << "(c) Operator warunkowy ?: ";
    cout << (czyParzystaWarunkowo(liczba) ? "Parzysta" : "Nieparzysta") << endl;

    return 0;
}
// Output:
// Podaj liczbę całkowitą: -2
// Sprawdzenie parzystości liczby -2:
// (a) Operacje bitowe: Parzysta
// (b) Modulo: Parzysta
// (c) Operator warunkowy ?: Parzysta

// Podaj liczbę całkowitą: 5
// Sprawdzenie parzystości liczby 5:
// (a) Operacje bitowe: Nieparzysta
// (b) Modulo: Nieparzysta
// (c) Operator warunkowy ?: Nieparzysta
