/**
 * @file ZadTemperaturaFormat.cc
 * @brief Tabela konwersji temperatur z Celsjusza na Fahrenheita z formatowaniem
 * @author Franciszek Niedziela
 */
// zadanie 4.5
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << right << setw(9) << "Celsjusz" << "   " << setw(10) << "Fahrenheit" << endl;
    cout << string(7, '-') << "    " << string(9, '-') << endl;

    for (int C = -10; C <= 10; C += 5) {
        double F = (C * 9.0 / 5.0) + 32.0;

        // Wypisujemy z wyrównaniem do prawej, liczby dodatnie z wiodącymi spacjami, ujemne z minusem
        cout << setw(6) << C << "    "
             << fixed << setprecision(2) << setw(8) << F << endl;
    }

    return 0;
}
// Output:
// Celsjusz   Fahrenheit
// -------    ---------
//    -10       14.00
//     -5       23.00
//      0       32.00
//      5       41.00
//     10       50.00
