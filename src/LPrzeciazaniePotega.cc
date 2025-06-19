/**
 * @file LPrzeciazaniePotega.cc
 * @brief Przeciążenie funkcji potega dla int i double
 */
// zadanie 2.5
#include <iostream>
#include <cmath> // dla std::pow
using namespace std;

// Potęgowanie dla liczb całkowitych (int)
int potega(int podstawa, int wykladnik) {
    int wynik = 1;
    for (int i = 0; i < wykladnik; ++i) {
        wynik *= podstawa;
    }
    return wynik;
}

// Potęgowanie dla liczb zmiennoprzecinkowych (double)
double potega(double podstawa, int wykladnik) {
    return pow(podstawa, wykladnik);
}

int main() {
    int a = 3;
    int b = 4;
    double x = 2.5;
    int y = 3;

    cout << "Potega(int): " << a << "^" << b << " = " << potega(a, b) << endl;
    cout << "Potega(double): " << x << "^" << y << " = " << potega(x, y) << endl;

    return 0;
}
// Output:
// Potega(int): 3^4 = 81
// Potega(double): 2.5^3 = 15.625
