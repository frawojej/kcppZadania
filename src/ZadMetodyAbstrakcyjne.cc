/**
 * @file ZadMetodyAbstrakcyjne.cc
 * @brief Program obliczający obwód i pole powierzchni dla figur:
 *        kwadrat, trójkąt, prostokąt, koło (dziedziczące po klasie abstrakcyjnej Figura)
 *        oraz funkcję Dystans w klasie Koło:
 *        Oblicza promień odległości, w jakiej może znaleźć się następna osoba,
 *        jeśli na każdego obywatela przypada X metrów kwadratowych.
 * @author Franciszek Niedziela
 */
// zadanie 5.6
#include <iostream>
#include <cmath>
using namespace std;

// Stała Pi
const double PI = 3.14159265358979323846;

// Klasa abstrakcyjna Figura
class Figura {
public:
    virtual double Obwod() const = 0;
    virtual double Pole() const = 0;
    virtual void Wypisz() const = 0;
    virtual ~Figura() {} // wirtualny destruktor
};

// Kwadrat
class Kwadrat : public Figura {
    double bok;
public:
    Kwadrat(double b) : bok(b) {}

    double Obwod() const override {
        return 4 * bok;
    }

    double Pole() const override {
        return bok * bok;
    }

    void Wypisz() const override {
        cout << "Kwadrat o boku " << bok << endl;
        cout << "Obwod: " << Obwod() << endl;
        cout << "Pole: " << Pole() << endl;
    }
};

// Prostokąt
class Prostokat : public Figura {
    double a, b;
public:
    Prostokat(double aa, double bb) : a(aa), b(bb) {}

    double Obwod() const override {
        return 2 * (a + b);
    }

    double Pole() const override {
        return a * b;
    }

    void Wypisz() const override {
        cout << "Prostokat o bokach " << a << " i " << b << endl;
        cout << "Obwod: " << Obwod() << endl;
        cout << "Pole: " << Pole() << endl;
    }
};

// Trójkąt (przyjmujemy trójkąt prostokątny z podanymi dwoma przyprostokątnymi)
class Trojkat : public Figura {
    double a, b;
public:
    Trojkat(double aa, double bb) : a(aa), b(bb) {}

    double Obwod() const override {
        double c = sqrt(a*a + b*b);
        return a + b + c;
    }

    double Pole() const override {
        return 0.5 * a * b;
    }

    void Wypisz() const override {
        cout << "Trojkat prostokatny o przyprostokatnych " << a << " i " << b << endl;
        cout << "Obwod: " << Obwod() << endl;
        cout << "Pole: " << Pole() << endl;
    }
};

// Koło
class Kolo : public Figura {
    double promien;
public:
    Kolo(double r) : promien(r) {}

    double Obwod() const override {
        return 2 * PI * promien;
    }

    double Pole() const override {
        return PI * promien * promien;
    }

    void Wypisz() const override {
        cout << "Kolo o promieniu " << promien << endl;
        cout << "Obwod: " << Obwod() << endl;
        cout << "Pole: " << Pole() << endl;
    }

    // Funkcja Dystans: oblicza promień koła, w którym zmieści się osoba mająca do dyspozycji pole powierzchni x (m2)
    // czyli promień koła o polu x: r = sqrt(x/pi)
    double Dystans(double powierzchniaNaOsobe) const {
        if (powierzchniaNaOsobe <= 0) {
            cerr << "Powierzchnia na osobe musi byc dodatnia!" << endl;
            return -1;
        }
        return sqrt(powierzchniaNaOsobe / PI);
    }
};

int main() {
    Figura* figury[4];

    figury[0] = new Kwadrat(5.0);
    figury[1] = new Trojkat(3.0, 4.0);
    figury[2] = new Prostokat(4.0, 6.0);
    figury[3] = new Kolo(7.0);

    for (int i = 0; i < 4; i++) {
        figury[i]->Wypisz();
        cout << endl;
    }

    // Przykład użycia funkcji Dystans w klasie Kolo
    Kolo* kolo = dynamic_cast<Kolo*>(figury[3]);
    if (kolo) {
        double powierzchniaNaOsobe;
        cout << "Podaj powierzchnie na osobe (m2): ";
        cin >> powierzchniaNaOsobe;

        double promien = kolo->Dystans(powierzchniaNaOsobe);
        if (promien >= 0) {
            cout << "Nastepna osoba moze znalezc sie w odleglosci (promieniu): " << promien << " m" << endl;
        }
    }

    // Zwolnienie pamięci
    for (int i = 0; i < 4; i++) {
        delete figury[i];
    }

    return 0;
}
// Output:
// Kwadrat o boku 5
// Obwod: 20
// Pole: 25

// Trojkat prostokatny o przyprostokatnych 3 i 4
// Obwod: 12
// Pole: 6

// Prostokat o bokach 4 i 6
// Obwod: 20
// Pole: 24

// Kolo o promieniu 7
// Obwod: 43.9823
// Pole: 153.938

// Podaj powierzchnie na osobe (m2): 5
// Nastepna osoba moze znalezc sie w odleglosci (promieniu): 1.26157 m
