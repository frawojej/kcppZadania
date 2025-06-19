/**
 * @file ZadPrzeciazanieDodaj.cc
 * @author Franciszek Niedziela
 * @brief Przeciążanie funkcji dodaj dla int, double i std::string
 */
// zadanie 2.3
#include <iostream>
#include <string>
using namespace std;

// Dodawanie dwóch liczb całkowitych
int dodaj(int a, int b) {
    return a + b;
}

// Dodawanie dwóch liczb zmiennoprzecinkowych
double dodaj(double a, double b) {
    return a + b;
}

// Konkatenacja dwóch napisów
string dodaj(const string& a, const string& b) {
    return a + b;
}

int main() {
    int intA = 5, intB = 7;
    double doubleA = 3.14, doubleB = 2.71;
    string strA = "Hello, ", strB = "world!";

    cout << "Dodawanie int: " << intA << " + " << intB << " = " << dodaj(intA, intB) << endl;
    cout << "Dodawanie double: " << doubleA << " + " << doubleB << " = " << dodaj(doubleA, doubleB) << endl;
    cout << "Konkatenacja stringów: \"" << strA << "\" + \"" << strB << "\" = \"" << dodaj(strA, strB) << "\"" << endl;

    return 0;
}
// Output:
// Dodawanie int: 5 + 7 = 12
// Dodawanie double: 3.14 + 2.71 = 5.85
// Konkatenacja stringów: "Hello, " + "world!" = "Hello, world!"
