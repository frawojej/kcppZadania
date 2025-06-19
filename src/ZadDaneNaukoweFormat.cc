/**
 * @file ZadDaneNaukoweFormat.cc
 * @brief Wyświetlanie stałych matematycznych w trzech formatach: domyślnym, fixed i scientific
 *        z precyzją 6 cyfr, formatowanie kolumn z nagłówkami wyśrodkowanymi
 * @author Franciszek Niedziela
 */
// zadanie 4.6
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Pomocnicza funkcja do wyśrodkowania tekstu w polu o szerokości width
string center(const string& s, int width) {
    int len = (int)s.length();
    if (width <= len) return s;
    int left = (width - len) / 2;
    int right = width - len - left;
    return string(left, ' ') + s + string(right, ' ');
}

int main() {
    // Stałe matematyczne
    const double PI = 3.14159265358979323846;
    const double E = 2.71828182845904523536;
    const double GOLDEN_RATIO = 1.61803398874989484820;

    // Szerokości kolumn
    const int colNameWidth = 15;
    const int colValueWidth = 20;

    // Nagłówki - wyśrodkowane
    cout << "|" << center("Stała", colNameWidth)
         << " |" << center("Wartość (domyślnie)", colValueWidth)
         << " |" << center("Notacja stała", colValueWidth)
         << " |" << center("Notacja naukowa", colValueWidth)
         << " |" << endl;

    // Linia oddzielająca
    cout << "|" << string(colNameWidth, '-')
         << "|" << string(colValueWidth, '-')
         << "|" << string(colValueWidth, '-')
         << "|" << string(colValueWidth, '-')
         << "|" << endl;

    // Funkcja lambda do wypisywania w trzech formatach
    auto printRow = [&](const string& name, double value) {
        cout << "|" << left << setw(colNameWidth) << name << " |";

        // Domyślne formatowanie (bez manipulacji)
        cout << right << setw(colValueWidth) << value << " |";

        // Fixed z precyzją 6
        cout << fixed << setprecision(6)
             << setw(colValueWidth) << value << " |";

        // Scientific z precyzją 6
        cout << scientific << setprecision(6)
             << setw(colValueWidth) << value << " |" << endl;

        // Reset flagi na domyślne (usuwa fixed/scientific)
        cout.unsetf(ios::fixed | ios::scientific);
    };

    printRow("Pi", PI);
    printRow("e", E);
    printRow("Złoty podział", GOLDEN_RATIO);

    return 0;
}
// Output:
// |    Stała      |Wartość (domyślnie) |   Notacja stała    |  Notacja naukowa    |
// |---------------|--------------------|--------------------|--------------------|
// |Pi              |             3.14159 |            3.141593 |        3.141593e+00 |
// |e               |             2.71828 |            2.718282 |        2.718282e+00 |
// |Złoty podział |             1.61803 |            1.618034 |        1.618034e+00 |
