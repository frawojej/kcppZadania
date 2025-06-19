/**
 * @file ZadClass.cc
 * @brief Przykład klasy w C++ z metodami deklarowanymi i definiowanymi w klasie i poza nią,
 *        z użyciem sekcji public, private, protected, zmiennych w każdej sekcji,
 *        funkcji inline oraz funkcji mających dostęp do zmiennych private i protected.
 * @author Franciszek Niedziela
 */
// zadanie 5.1
#include <iostream>
#include <string>
using namespace std;

class Przyklad {
public:
    // zmienna publiczna
    string publicznaZmienna;

    // metoda deklarowana i definiowana w klasie (inline)
    void ustawPublicznaZmienna(const string& wartosc) {
        publicznaZmienna = wartosc;
    }

    // metoda deklarowana w klasie, definiowana poza klasą
    void pokazWszystko() const;

    // inline funkcja publiczna, dostęp do zmiennych private i protected
    inline void pokazPrivateProtected() const {
        cout << "privateZmienna = " << privateZmienna << endl;
        cout << "protectedZmienna = " << protectedZmienna << endl;
    }

protected:
    // zmienna chroniona
    int protectedZmienna;

    // metoda chroniona, deklarowana i definiowana w klasie
    void ustawProtectedZmienna(int wartosc) {
        protectedZmienna = wartosc;
    }

private:
    // zmienna prywatna
    double privateZmienna;

    // metoda prywatna, deklarowana i definiowana w klasie
    void ustawPrivateZmienna(double wartosc) {
        privateZmienna = wartosc;
    }

public:
    // metoda publiczna, która ustawia zmienne private i protected, wywołując metody prywatne i chronione
    void ustawPrywatneIChronione(double prywatnaWartosc, int chronionaWartosc) {
        ustawPrivateZmienna(prywatnaWartosc);
        ustawProtectedZmienna(chronionaWartosc);
    }
};

// Definicja metody poza klasą
void Przyklad::pokazWszystko() const {
    cout << "publicznaZmienna = " << publicznaZmienna << endl;
    cout << "protectedZmienna = " << protectedZmienna << endl;
    cout << "privateZmienna = " << privateZmienna << endl;
}

int main() {
    Przyklad obiekt;

    obiekt.ustawPublicznaZmienna("Wartosc publiczna");
    obiekt.ustawPrywatneIChronione(3.14159, 42);

    cout << "Wyswietlanie przez metode pokazWszystko():" << endl;
    obiekt.pokazWszystko();

    cout << "\nWyswietlanie przez inline metode pokazPrivateProtected():" << endl;
    obiekt.pokazPrivateProtected();

    return 0;
}
// Output:
// Wyswietlanie przez metode pokazWszystko():
// publicznaZmienna = Wartosc publiczna
// protectedZmienna = 42
// privateZmienna = 3.14159

// Wyswietlanie przez inline metode pokazPrivateProtected():
// privateZmienna = 3.14159
// protectedZmienna = 42
