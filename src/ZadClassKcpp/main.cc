#include <iostream>
#include "ZadKcpp.cc"
/**
 * @file main.cc
 * @brief Główny plik programu, który uruchamia zadania z klasy ZadKcpp
 * @author Franciszek Niedziela
 */
using namespace std;

int main() {
    ZadKcpp zadania;

    int wybor = -1;
    do {
        cout << "\n=== MENU ZADAŃ ===" << endl;
        cout << "1. Zadanie 1.1 - Powitanie" << endl;
        cout << "2. Zadanie 1.2 - Suma liczb 1..n" << endl;
        cout << "3. Zadanie 2.1 - Parzystosc modulo" << endl;
        cout << "4. Zadanie 3.1 - Silnia iteracyjnie" << endl;
        cout << "5. Zadanie 4.1 - Trojkat z gwiazdek" << endl;
        cout << "6. Zadanie 5.1 - Pole i obwod kwadratu" << endl;
        cout << "7. Zadanie 5.2 - Sprawdzenie liczby pierwszej" << endl;
        cout << "8. Zadanie 5.3 - Suma cyfr liczby" << endl;
        cout << "9. Zadanie 5.4 - Liczby podzielne przez 3 i 5" << endl;
        cout << "10. Zadanie 5.6 - Sprawdzenie parzystosci 3 metodami" << endl;
        cout << "0. Wyjdz" << endl;
        cout << "Wybierz zadanie: ";
        cin >> wybor;

        if (wybor > 0 && wybor <= 10) {
            zadania.uruchom(wybor);
        } else if (wybor != 0) {
            cout << "Niepoprawny wybor!" << endl;
        }
    } while (wybor != 0);

    cout << "Koniec programu." << endl;
    return 0;
}
