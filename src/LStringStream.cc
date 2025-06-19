/**
 * @file LStringStream.cc
 * @brief Przykład zastosowania klasy stringstream z biblioteki sstream
 * @author Franciszek Niedziela
 */
// zadanie 4.0
#include <iostream>
#include <sstream>  // dla std::stringstream
#include <string>
using namespace std;

int main() {
    // Tworzymy obiekt stringstream
    stringstream ss;

    // Wpisujemy różne typy danych do stringstream
    int liczba = 2025;
    double pi = 3.14159;
    string tekst = "C++";

    ss << "Rok: " << liczba << ", liczba Pi: " << pi << ", jezyk: " << tekst;

    // Odczytujemy zawartość stringstream jako string
    string wynik = ss.str();

    cout << "Zawartość stringstream: " << wynik << endl;

    // Przykład parsowania danych ze stringstream
    string dane = "123 45.67 Hello";
    stringstream ss2(dane);

    int a;
    double b;
    string c;

    ss2 >> a >> b >> c;

    cout << "Parsowanie ze stringstream:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
// Output:
// Zawartość stringstream: Rok: 2025, liczba Pi: 3.14159, jezyk: C++
// Parsowanie ze stringstream:
// a = 123
// b = 45.67
// c = Hello
