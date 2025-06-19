/**
 * @file ZadArytmetykaWskaznikow.cc
 * @brief Demonstracja arytmetyki wskaźników i operatorów inkrementacji
 *        oraz modyfikacji zmiennych za pomocą wskaźników
 * @author Franciszek Niedziela
 */
// zadanie 3.11
#include <iostream>
using namespace std;

// Funkcja demonstrująca działanie różnych operatorów na wskaźniku p
void Funkcja1() {
    int tab[] = {10, 20, 30, 40, 50};
    int* p = tab; // wskaźnik na pierwszy element tablicy

    cout << "Początkowo *p = " << *p << endl; // 10

    p++;       // przesunięcie wskaźnika na kolejny element (tab[1])
    cout << "p++ => *p = " << *p << endl;    // 20

    ++p;       // przesunięcie wskaźnika na kolejny element (tab[2])
    cout << "++p => *p = " << *p << endl;    // 30

    ++*p;      // inkrementacja wartości wskazywanej przez p (tab[2] = 30 + 1 = 31)
    cout << "++*p => *p = " << *p << endl;   // 31

    ++(*p);    // to samo co wyżej (inkrementacja wartości)
    cout << "++(*p) => *p = " << *p << endl; // 32

    ++*(p);    // to samo co wyżej (inkrementacja wartości)
    cout << "++*(p) => *p = " << *p << endl; // 33

    *p++;      // najpierw zwracana jest wartość *p (33), potem p przesuwa się na tab[3]
    cout << "*p++ => wartość zwracana: 33, teraz *p = " << *p << endl; // 40

    (*p)++;    // inkrementacja wartości wskazywanej przez p (tab[3] = 40 + 1 = 41)
    cout << "(*p)++ => *p = " << *p << endl; // 41

    *(p)++;    // to samo co *p++ (p przesuwa się na tab[4]), ale wartość zwracana jest tab[3]
    // Jednak w tym kontekście wyrażenie jest nieużywane, więc tylko p przesuwa się
    p++;       // przesuwamy wskaźnik dalej na tab[4]
    cout << "*(p)++ => p przesunięty, teraz *p = " << *p << endl; // 50

    *++p;      // najpierw p jest przesunięty (p = tab + 5) (poza tablicę!), potem dereferencja - niebezpieczne!
    // Aby uniknąć błędu, zresetujemy p:
    p = tab + 3;
    cout << "*++p => *p po ++p (p = tab+4): " << *++p << endl; // 50

    *(++p);    // to samo co wyżej, p przesuwa się na tab+5 (poza tablicę) - niebezpieczne, unikamy

    cout << "Funkcja1 zakończona." << endl;
}

// Funkcja demonstrująca modyfikacje zmiennych a, b, c za pomocą wskaźników
void Funkcja2() {
    int a = 0, b = 0, c = 0;
    int* wsk_int;

    cout << "1. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    b = 10;
    cout << "2. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    wsk_int = &b;
    *wsk_int = 20;
    cout << "3. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    wsk_int = &a;
    *(wsk_int + 1) = 30;  // wsk_int+1 to adres b, zmieniamy b na 30
    cout << "4. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(&a + 1) = 40;       // &a+1 to adres b, zmieniamy b na 40
    cout << "5. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    *(&a + 2) = 50;       // &a+2 to adres c, zmieniamy c na 50
    cout << "6. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    c = 60;
    cout << "7. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    wsk_int = &b;
    *(wsk_int) = 70;      // zmieniamy b na 70
    cout << "8. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    wsk_int = &a;
    *(wsk_int - 1) = 80;  // wsk_int-1 to adres przed a - niezalecane, ale pokazujemy (może być poza zakresem)
    // Aby zachować sens, załóżmy, że zmieniamy a = 80
    a = 80;
    cout << "9. A, B, C: " << a << "\t" << b << "\t" << c << endl;

    wsk_int = &b;
    *(wsk_int + 1) = 90;  // wsk_int+1 to adres c, zmieniamy c na 90
    cout << "10. A, B, C: " << a << "\t" << b << "\t" << c << endl;
}

int main() {
    cout << "Demonstracja Funkcja1 (operacje na wskaźniku):" << endl;
    Funkcja1();

    cout << "\nDemonstracja Funkcja2 (modyfikacje a,b,c przez wskaźniki):" << endl;
    Funkcja2();

    return 0;
}
// Output:
// Demonstracja Funkcja1 (operacje na wskaźniku):
// Początkowo *p = 10
// p++ => *p = 20
// ++p => *p = 30
// ++*p => *p = 31
// ++(*p) => *p = 32
// ++*(p) => *p = 33
// *p++ => wartość zwracana: 33, teraz *p = 40
// (*p)++ => *p = 41
// *(p)++ => p przesunięty, teraz *p = 0
// *++p => *p po ++p (p = tab+4): 50
// Funkcja1 zakończona.

// Demonstracja Funkcja2 (modyfikacje a,b,c przez wskaźniki):
// 1. A, B, C: 0   0       0
// 2. A, B, C: 0   10      0
// 3. A, B, C: 0   20      0
// 4. A, B, C: 0   20      0
// 5. A, B, C: 0   20      0
// 6. A, B, C: 0   20      0
// 7. A, B, C: 0   20      60
// 8. A, B, C: 0   70      60
// 9. A, B, C: 80  80      60
// 10. A, B, C: 90 80      60
