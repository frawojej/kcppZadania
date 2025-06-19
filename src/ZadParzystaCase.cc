/**
 * @file ZadParzystaCase.cc
 * @brief Sprawdzanie parzystości liczby za pomocą trzech metod wybranych przez switch
 *        (a) operacje bitowe (&)
 *        (b) modulo (%)
 *        (c) operator warunkowy (?:)
 * @author Franciszek Niedziela
 */
// // zadanie 4.8
#include <iostream>
using namespace std;

// (a) Sprawdzenie parzystości za pomocą operacji bitowej &
bool czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

// (b) Sprawdzenie parzystości za pomocą modulo
bool czyParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

// (c) Sprawdzenie parzystości z użyciem operatora warunkowego (?:)
bool czyParzystaWarunkowo(int liczba) {
    return ((liczba & 1) == 0) ? true : false;
}

int main() {
    int liczba;
    int wybor;

    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    cout << "Wybierz metodę sprawdzenia parzystości:\n";
    cout << "1 - operacje bitowe (&)\n";
    cout << "2 - modulo (%)\n";
    cout << "3 - operator warunkowy (?:)\n";
    cout << "Twój wybór: ";
    cin >> wybor;

    bool wynik = false;
    bool poprawnyWybor = true;

    switch (wybor) {
        case 1:
            wynik = czyParzystaBitowo(liczba);
            break;
        case 2:
            wynik = czyParzystaModulo(liczba);
            break;
        case 3:
            wynik = czyParzystaWarunkowo(liczba);
            break;
        default:
            cout << "Niepoprawny wybór metody!" << endl;
            poprawnyWybor = false;
            break;
    }

    if (poprawnyWybor) {
        cout << "Liczba " << liczba << " jest ";
        cout << (wynik ? "parzysta." : "nieparzysta.") << endl;
    }

    return 0;
}
// Output:
// Podaj liczbę całkowitą: 5
// Wybierz metodę sprawdzenia parzystości:
// 1 - operacje bitowe (&)
// 2 - modulo (%)
// 3 - operator warunkowy (?:)
// Twój wybór: 1
// Liczba 5 jest nieparzysta.
