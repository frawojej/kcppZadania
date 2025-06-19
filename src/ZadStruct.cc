/**
 * @file ZadStruct.cc
 * @brief Przykład użycia struktury w C++:
 *        - deklaracja struktury,
 *        - definicja obiektów,
 *        - wywołanie, zmiana i odczyt wartości,
 *        - konstruktor z listą inicjalizacyjną
 * @author Franciszek Niedziela
 */
// zadanie 5.2
#include <iostream>
#include <string>
using namespace std;

// Deklaracja struktury z konstruktorem i listą inicjalizacyjną
struct Student {
    string imie;
    string nazwisko;
    int wiek;

    // Konstruktor domyślny
    Student() : imie(""), nazwisko(""), wiek(0) {}

    // Konstruktor z listą inicjalizacyjną
    Student(const string& im, const string& naz, int w) : imie(im), nazwisko(naz), wiek(w) {}

    // Metoda do wyświetlania danych studenta
    void pokaz() const {
        cout << "Student: " << imie << " " << nazwisko << ", wiek: " << wiek << endl;
    }
};

int main() {
    // Definicja obiektu ze standardowym konstruktorem i późniejszą inicjalizacją
    Student s1;
    s1.imie = "Jan";
    s1.nazwisko = "Kowalski";
    s1.wiek = 21;

    // Definicja obiektu z użyciem konstruktora z listą inicjalizacyjną
    Student s2("Anna", "Nowak", 22);

    // Wywołanie metody pokazującej dane
    cout << "Dane studenta s1:" << endl;
    s1.pokaz();

    cout << "Dane studenta s2:" << endl;
    s2.pokaz();

    // Zmiana wartości pola w obiekcie
    s1.wiek = 23;
    cout << "Po zmianie wieku studenta s1:" << endl;
    s1.pokaz();

    // Odczyt pojedynczej wartości
    cout << "Nazwisko studenta s2: " << s2.nazwisko << endl;

    return 0;
}
// Output:
// Dane studenta s1:
// Student: Jan Kowalski, wiek: 21
// Dane studenta s2:
// Student: Anna Nowak, wiek: 22
// Po zmianie wieku studenta s1:
// Student: Jan Kowalski, wiek: 23
// Nazwisko studenta s2: Nowak
