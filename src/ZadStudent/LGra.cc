/**
 * @file ZadStudent/LGra.cc
 * @brief Gra zgadywanie liczby z ograniczeniem prób i poziomami trudności
 * @author Franciszek Niedziela
 */
// zadanie 4.15
#include <iostream>
#include <cstdlib>  // dla rand()
#include <ctime>    // dla time()
using namespace std;

int main() {
    srand(time(0));

    int wybor;
    int zakres_min = 1;
    int zakres_max;

    cout << "Wybierz poziom trudnosci:\n";
    cout << "1 - Latwy (1-50)\n";
    cout << "2 - Trudny (1-200)\n";
    cout << "Twoj wybor: ";
    cin >> wybor;

    if (wybor == 1) {
        zakres_max = 50;
    } else if (wybor == 2) {
        zakres_max = 200;
    } else {
        cout << "Niepoprawny wybor, ustawiam poziom latwy (1-50)." << endl;
        zakres_max = 50;
    }

    int wylosowana = rand() % zakres_max + zakres_min; // liczba od zakres_min do zakres_max
    int proba, licznik = 0;
    const int max_proby = 10;

    cout << "Zgadnij liczbe (" << zakres_min << "-" << zakres_max << "):" << endl;

    while (licznik < max_proby) {
        cin >> proba;
        licznik++;

        if (proba < wylosowana) {
            cout << "Za malo! Probuj dalej." << endl;
        } else if (proba > wylosowana) {
            cout << "Za duzo! Probuj dalej." << endl;
        } else {
            cout << "Brawo! Zgadles w " << licznik << " probach." << endl;
            break;  // przerywa pętlę
        }
    }

    if (licznik == max_proby && proba != wylosowana) {
        cout << "Niestety, nie zgadles w " << max_proby << " probach." << endl;
        cout << "Prawidlowa liczba to: " << wylosowana << endl;
    }

    return 0;
}
// Output:
// Wybierz poziom trudnosci:
// 1 - Latwy (1-50)
// 2 - Trudny (1-200)
// Twoj wybor: 2
// Zgadnij liczbe (1-200):
// 100
// Za malo! Probuj dalej.
// 150
// Za duzo! Probuj dalej.
// 125
// Za malo! Probuj dalej.
// 138
// Za malo! Probuj dalej.
// 145
// Za duzo! Probuj dalej.
// 142
// Za malo! Probuj dalej.
// 143
// Brawo! Zgadles w 7 probach.
