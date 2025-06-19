/**
 * @file ZadStructKonstruktor.cc
 * @brief Przykład struktury z konstruktorami i inicjalizacją zmiennych:
 *        - konstruktor domyślny,
 *        - konstruktor z parametrami,
 *        - inicjalizacja standardowa i lista inicjalizacyjna
 * @author Franciszek Niedziela
 */
// zadanie 5.4
#include <iostream>
#include <string>
using namespace std;

struct Punkt {
    // Inicjalizacja standardowa
    double x = 0.0;
    double y = 0.0;

    // Konstruktor domyślny
    Punkt() {
        cout << "Wywolano konstruktor domyslny struktury" << endl;
    }

    // Konstruktor z parametrami i lista inicjalizacyjna
    Punkt(double xx, double yy) : x(xx), y(yy) {
        cout << "Wywolano konstruktor z parametrami struktury" << endl;
    }

    void pokaz() const {
        cout << "Punkt: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    cout << "Tworzenie obiektu struktury z konstruktorem domyslnym:" << endl;
    Punkt p1;
    p1.pokaz();

    cout << "\nTworzenie obiektu struktury z konstruktorem z parametrami:" << endl;
    Punkt p2(3.5, 7.2);
    p2.pokaz();

    cout << "\nKoniec programu." << endl;

    return 0;
}
// Output:
// Tworzenie obiektu struktury z konstruktorem domyslnym:
// Wywolano konstruktor domyslny struktury
// Punkt: (0, 0)

// Tworzenie obiektu struktury z konstruktorem z parametrami:
// Wywolano konstruktor z parametrami struktury
// Punkt: (3.5, 7.2)

// Koniec programu.
