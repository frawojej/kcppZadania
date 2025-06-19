/**
 * @file ZadPrzeciazaniePlus.cc
 * @brief Przeciążenie operatora + dla klasy Punkt
 */
/// zadanie 2.4
#include <iostream>
using namespace std;

class Punkt {
private:
    double x;
    double y;

public:
    // Konstruktor domyślny
    Punkt() : x(0), y(0) {}

    // Konstruktor z parametrami
    Punkt(double xVal, double yVal) : x(xVal), y(yVal) {}

    // Gettery
    double getX() const { return x; }
    double getY() const { return y; }

    // Przeciążenie operatora +
    Punkt operator+(const Punkt& other) const {
        return Punkt(x + other.x, y + other.y);
    }

    // Metoda do wypisania punktu
    void print() const {
        cout << "(" << x << ", " << y << ")";
    }
};

int main() {
    Punkt p1(2.5, 3.5);
    Punkt p2(4.0, 1.5);

    cout << "Punkt p1: ";
    p1.print();
    cout << endl;

    cout << "Punkt p2: ";
    p2.print();
    cout << endl;

    Punkt p3 = p1 + p2;

    cout << "Wynik p1 + p2: ";
    p3.print();
    cout << endl;

    return 0;
}
// Output:
// Punkt p1: (2.5, 3.5)
// Punkt p2: (4, 1.5)
// Wynik p1 + p2: (6.5, 5)
