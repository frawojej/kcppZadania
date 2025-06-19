/**
 * @file ZadStudent/ZadForA.cc
 * @brief Modyfikacja programu LFor.cc - wypisywanie liczb nieparzystych oraz liczb podzielnych przez 7
 * @author Franciszek Niedziela
 */
// zadanie 4.11
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe n: ";
    cin >> n;

    // Wypisujemy liczby nieparzyste od 1 do n
    cout << "Liczby nieparzyste od 1 do " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Wypisujemy liczby podzielne przez 7 od 1 do n
    cout << "Liczby podzielne przez 7 od 1 do " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    // Pozostawiamy oryginalną pętlę wypisującą liczby podzielne przez 3 i 5
    cout << "Liczby podzielne przez 3 i 5 od 1 do " << n << ":" << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
// Output:
// Podaj liczbe n: 9
// Liczby nieparzyste od 1 do 9:
// 1 3 5 7 9
// Liczby podzielne przez 7 od 1 do 9:
// 7
// Liczby podzielne przez 3 i 5 od 1 do 9:

