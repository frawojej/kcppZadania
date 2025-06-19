/**
 * @file ZadZwracanie.cc
 * @author Franciszek Niedziela
 * @brief Przykład funkcji zwracających różne typy wartości
 */
// zadanie 2.1
#include <iostream>
using namespace std;

// 1. Zwracanie przez wartość
int zwrocPrzezWartosc() {
    int x = 42;
    return x; // kopia wartości
}

// 2. Zwracanie przez referencję
int& zwrocPrzezReferencje(int& ref) {
    // zwracamy referencję do przekazanego argumentu
    return ref;
}

// 3. Zwracanie przez wskaźnik
int* zwrocPrzezWskaznik(int* ptr) {
    // zwracamy wskaźnik przekazany jako argument
    return ptr;
}

// 4. Zwracanie tablicy (w praktyce wskaźnik do pierwszego elementu statycznej tablicy)
int* zwrocTablice() {
    static int tablica[5] = {10, 20, 30, 40, 50};
    return tablica; // zwracamy wskaźnik do pierwszego elementu
}

int main() {
    cout << "1. Zwracanie przez wartosc:" << endl;
    int val = zwrocPrzezWartosc();
    cout << "Wartosc: " << val << endl << endl;

    cout << "2. Zwracanie przez referencje:" << endl;
    int a = 100;
    int& ref = zwrocPrzezReferencje(a);
    cout << "Przed zmiana: a = " << a << endl;
    ref = 200; // zmienia a przez referencję
    cout << "Po zmianie przez referencje: a = " << a << endl << endl;

    cout << "3. Zwracanie przez wskaznik:" << endl;
    int b = 300;
    int* ptr = zwrocPrzezWskaznik(&b);
    cout << "Wartosc wskazywana przez ptr: " << *ptr << endl;
    *ptr = 400;
    cout << "Po zmianie przez wskaznik: b = " << b << endl << endl;

    cout << "4. Zwracanie tablicy (wskaznik do statycznej tablicy):" << endl;
    int* tab = zwrocTablice();
    cout << "Elementy tablicy: ";
    for (int i = 0; i < 5; ++i) {
        cout << tab[i] << " ";
    }
    cout << endl;

    // Modyfikacja tablicy przez wskaźnik
    tab[0] = 999;
    cout << "Po zmianie elementu 0: ";
    for (int i = 0; i < 5; ++i) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
// Output:
// 1. Zwracanie przez wartosc:
// Wartosc: 42

// 2. Zwracanie przez referencje:
// Przed zmiana: a = 100
// Po zmianie przez referencje: a = 200

// 3. Zwracanie przez wskaznik:
// Wartosc wskazywana przez ptr: 300
// Po zmianie przez wskaznik: b = 400

// 4. Zwracanie tablicy (wskaznik do statycznej tablicy):
// Elementy tablicy: 10 20 30 40 50
// Po zmianie elementu 0: 999 20 30 40 50
