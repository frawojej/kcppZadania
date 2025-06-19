/**
 * @file ZadStudent/LWhileA.cc
 * @brief Modyfikacja programu z pętlą while - zliczanie ilości wartości i sprawdzanie dodatniości
 * @author Franciszek Niedziela
 */
// zadanie 4.14
#include <iostream>
using namespace std;

int main() {
    int liczba, suma = 0, licznik = 0;

    cout << "Wprowadzaj liczby dodatnie (0 konczy program):" << endl;
    cin >> liczba;

    while (liczba != 0) {
        if (liczba > 0) {
            suma += liczba;
            licznik++;
        } else {
            cout << "Podana liczba nie jest dodatnia! Ignoruję." << endl;
        }
        cin >> liczba;
    }

    cout << "Suma wprowadzonych liczb dodatnich: " << suma << endl;
    cout << "Liczba wprowadzonych liczb dodatnich: " << licznik << endl;

    return 0;
}
// Output:
// Wprowadzaj liczby dodatnie (0 konczy program):
// 3
// 4
// 6
// 7
// 3
// 0
// Suma wprowadzonych liczb dodatnich: 23
// Liczba wprowadzonych liczb dodatnich: 5
