/**
 * @file ZadSwitch.cc
 * @brief Przykład wykorzystania instrukcji switch dla całych słów (stringów) - z wykorzystaniem mapowania na int
 *        Modyfikacja ZadParzystaCase.cc - wybór metody sprawdzania parzystości przez wpisanie słowa
 * @author Franciszek Niedziela
 */
// zadanie 4.10
#include <iostream>
#include <string>
using namespace std;

// Funkcje sprawdzające parzystość
bool czyParzystaBitowo(int liczba) {
    return (liczba & 1) == 0;
}

bool czyParzystaModulo(int liczba) {
    return (liczba % 2) == 0;
}

bool czyParzystaWarunkowo(int liczba) {
    return ((liczba & 1) == 0) ? true : false;
}

int main() {
    int liczba;
    string wybor;

    cout << "Podaj liczbę całkowitą: ";
    cin >> liczba;

    cout << "Wybierz metodę sprawdzenia parzystości (bitowo, modulo, warunkowo): ";
    cin >> wybor;

    // Nie można użyć switch bezpośrednio na string, więc mapujemy na int lub enum
    int opcja = -1;
    if (wybor == "bitowo") opcja = 1;
    else if (wybor == "modulo") opcja = 2;
    else if (wybor == "warunkowo") opcja = 3;

    bool wynik = false;
    bool poprawnyWybor = true;

    switch (opcja) {
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
// Podaj liczbę całkowitą: 6
// Wybierz metodę sprawdzenia parzystości (bitowo, modulo, warunkowo): modulo
// Liczba 6 jest parzysta.
