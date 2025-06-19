/**
 * @file ZadKlasaKonstruktor.cc
 * @brief Przykład klasy z konstruktorami i inicjalizacją zmiennych:
 *        - konstruktor domyślny,
 *        - konstruktor z parametrami,
 *        - domyślny destruktor,
 *        - inicjalizacja standardowa i lista inicjalizacyjna
 * @author Franciszek Niedziela
 */
// zadanie 5.4
#include <iostream>
#include <string>
using namespace std;

class Osoba {
    // Inicjalizacja standardowa zmiennych (C++11)
    string imie = "Brak";
    string nazwisko = "Brak";
    int wiek = 0;

public:
    // Konstruktor domyślny (bez parametrów)
    Osoba() {
        cout << "Wywolano konstruktor domyslny" << endl;
    }

    // Konstruktor z parametrami i lista inicjalizacyjna
    Osoba(const string& im, const string& naz, int w) : imie(im), nazwisko(naz), wiek(w) {
        cout << "Wywolano konstruktor z parametrami" << endl;
    }

    // Domyślny destruktor (kompilator generuje automatycznie)
    ~Osoba() {
        cout << "Wywolano destruktor dla " << imie << " " << nazwisko << endl;
    }

    void pokaz() const {
        cout << "Osoba: " << imie << " " << nazwisko << ", wiek: " << wiek << endl;
    }
};

int main() {
    cout << "Tworzenie obiektu o konstruktorze domyslnym:" << endl;
    Osoba o1;
    o1.pokaz();

    cout << "\nTworzenie obiektu z konstruktorem z parametrami:" << endl;
    Osoba o2("Jan", "Kowalski", 30);
    o2.pokaz();

    cout << "\nKoniec programu, obiekty zostana zniszczone." << endl;

    return 0;
}
// Output:
// Tworzenie obiektu o konstruktorze domyslnym:
// Wywolano konstruktor domyslny
// Osoba: Brak Brak, wiek: 0

// Tworzenie obiektu z konstruktorem z parametrami:
// Wywolano konstruktor z parametrami
// Osoba: Jan Kowalski, wiek: 30

// Koniec programu, obiekty zostana zniszczone.
// Wywolano destruktor dla Jan Kowalski
// Wywolano destruktor dla Brak Brak
