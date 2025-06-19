/**
 * @file ZadStudent/LKsztalt.cc
 * @brief Rysowanie kwadratu, trójkąta prostokątnego, trójkąta równoramiennego oraz piramidy liczb
 * @author Franciszek Niedziela
 */
// zadanie 4.13
#include <iostream>
using namespace std;

int main() {
    int rozmiar;
    cout << "Podaj rozmiar: ";
    cin >> rozmiar;

    // Rysowanie kwadratu
    cout << "\nKwadrat:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j < rozmiar; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Rysowanie trójkąta prostokątnego
    cout << "\nTrojkat prostokatny:" << endl;
    for (int i = 0; i < rozmiar; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Rysowanie trójkąta równoramiennego
    cout << "\nTrojkat rownoramienny:" << endl;
    for (int i = 1; i <= rozmiar; i++) {
        // Spacje przed gwiazdkami
        for (int sp = 0; sp < rozmiar - i; sp++) {
            cout << "  "; // dwie spacje, aby wyrównać z gwiazdkami
        }
        // Gwiazdki: (2*i - 1)
        for (int gw = 0; gw < 2 * i - 1; gw++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Rysowanie piramidy z liczbami
    cout << "\nPiramida z liczbami:" << endl;
    for (int i = 1; i <= rozmiar; i++) {
        // Spacje przed liczbami
        for (int sp = 0; sp < rozmiar - i; sp++) {
            cout << "  ";
        }
        // Wypisanie liczby i, i razy
        for (int k = 0; k < i; k++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
// Output:
// Podaj rozmiar: 7

// Kwadrat:
// * * * * * * *
// * * * * * * *
// * * * * * * *
// * * * * * * *
// * * * * * * *
// * * * * * * *
// * * * * * * *

// Trojkat prostokatny:
// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *
// * * * * * * *

// Trojkat rownoramienny:
//             *
//           * * *
//         * * * * *
//       * * * * * * *
//     * * * * * * * * *
//   * * * * * * * * * * *
// * * * * * * * * * * * * *

// Piramida z liczbami:
//             1
//           2 2
//         3 3 3
//       4 4 4 4
//     5 5 5 5 5
//   6 6 6 6 6 6
// 7 7 7 7 7 7 7
