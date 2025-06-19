/**
 * @file ZadPrzeciazaniePole.cc
 * @author Franciszek Niedziela
 * @brief Przeciążanie funkcji pole() dla kwadratu, prostokąta i koła
 */
// zadanie 2.2
#include <iostream>
#include <cmath> // dla M_PI
using namespace std;

// Pole kwadratu
double pole(double bok) {
    return bok * bok;
}

// Pole prostokąta
double pole(double bokA, double bokB) {
    return bokA * bokB;
}

// Pole koła
double pole(float promien) {
    return M_PI * promien * promien;
}

int main() {
    double bokKwadratu = 5.0;
    double bokProstokatA = 4.0;
    double bokProstokatB = 7.0;
    float promienKola = 3.0f;

    cout << "Pole kwadratu o boku " << bokKwadratu << " = " << pole(bokKwadratu) << endl;
    cout << "Pole prostokąta o bokach " << bokProstokatA << " i " << bokProstokatB << " = " << pole(bokProstokatA, bokProstokatB) << endl;
    cout << "Pole koła o promieniu " << promienKola << " = " << pole(promienKola) << endl;

    return 0;
}
// Output:
// Pole kwadratu o boku 5 = 25
// Pole prostokąta o bokach 4 i 7 = 28
// Pole koła o promieniu 3 = 28.2743
