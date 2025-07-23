/**
 * @file ZadClassKcpp/ZadKcpp.cc
 * @brief Implementacja klasy ZadKcpp z 10 funkcjami (zadaniami) w jednej klasie
 *        - funkcje bazują na poprzednich przykładach i zadaniach 1.1-5.6
 *        - metoda uruchom(int nr) wywołuje odpowiednią funkcję
 * @author Franciszek Niedziela
 */

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

class ZadKcpp {
public:
    virtual ~ZadKcpp() {}

    void uruchom(int nr) {
        switch (nr) {
            case 1: zadanie1_1(); break;
            case 2: zadanie1_2(); break;
            case 3: zadanie2_1(); break;
            case 4: zadanie3_1(); break;
            case 5: zadanie4_1(); break;
            case 6: zadanie5_1(); break;
            case 7: zadanie5_2(); break;
            case 8: zadanie5_3(); break;
            case 9: zadanie5_4(); break;
            case 10: zadanie5_6(); break;
            default: cout << "Nieznany numer zadania!" << endl; break;
        }
    }

private:
    // Zadanie 1.1 - prosty przykład: wypisanie tekstu
    void zadanie1_1() {
        cout << "Zadanie 1.1: Wypisanie powitania." << endl;
        cout << "Witaj w programie ZadKcpp!" << endl;
    }

    // Zadanie 1.2 - obliczenie sumy liczb od 1 do n
    void zadanie1_2() {
        int n;
        cout << "Zadanie 1.2: Suma liczb od 1 do n." << endl;
        cout << "Podaj n: ";
        cin >> n;
        int suma = 0;
        for (int i = 1; i <= n; i++) suma += i;
        cout << "Suma liczb od 1 do " << n << " wynosi: " << suma << endl;
    }

    // Zadanie 2.1 - sprawdzenie czy liczba jest parzysta (modulo)
    void zadanie2_1() {
        int x;
        cout << "Zadanie 2.1: Sprawdzenie czy liczba jest parzysta." << endl;
        cout << "Podaj liczbe: ";
        cin >> x;
        cout << "Liczba " << x << (x % 2 == 0 ? " jest parzysta." : " jest nieparzysta.") << endl;
    }

    // Zadanie 3.1 - obliczanie silni iteracyjnie
    void zadanie3_1() {
        int n;
        cout << "Zadanie 3.1: Obliczanie silni iteracyjnie." << endl;
        cout << "Podaj n (>=0): ";
        cin >> n;
        if (n < 0) {
            cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych." << endl;
            return;
        }
        long long silnia = 1;
        for (int i = 1; i <= n; i++) silnia *= i;
        cout << "Silnia z " << n << " wynosi: " << silnia << endl;
    }

    // Zadanie 4.1 - rysowanie trójkąta prostokątnego z gwiazdek
    void zadanie4_1() {
        int n;
        cout << "Zadanie 4.1: Rysowanie trojkata prostokatnego z gwiazdek." << endl;
        cout << "Podaj wysokosc trojkata: ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) cout << "* ";
            cout << endl;
        }
    }

    // Zadanie 5.1 - obliczanie pola i obwodu kwadratu
    void zadanie5_1() {
        double bok;
        cout << "Zadanie 5.1: Pole i obwod kwadratu." << endl;
        cout << "Podaj dlugosc boku: ";
        cin >> bok;
        double pole = bok * bok;
        double obwod = 4 * bok;
        cout << "Pole: " << pole << ", Obwod: " << obwod << endl;
    }

    // Zadanie 5.2 - sprawdzanie liczby pierwszej
    void zadanie5_2() {
        int n;
        cout << "Zadanie 5.2: Sprawdzenie czy liczba jest pierwsza." << endl;
        cout << "Podaj liczbe: ";
        cin >> n;
        if (n < 2) {
            cout << "Liczba nie jest pierwsza." << endl;
            return;
        }
        bool pierwsza = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                pierwsza = false;
                break;
            }
        }
        cout << "Liczba " << n << (pierwsza ? " jest pierwsza." : " nie jest pierwsza.") << endl;
    }

    // Zadanie 5.3 - obliczanie sumy cyfr liczby
    void zadanie5_3() {
        int n;
        cout << "Zadanie 5.3: Suma cyfr liczby." << endl;
        cout << "Podaj liczbe: ";
        cin >> n;
        n = abs(n);
        int suma = 0;
        while (n > 0) {
            suma += n % 10;
            n /= 10;
        }
        cout << "Suma cyfr wynosi: " << suma << endl;
    }

    // Zadanie 5.4 - wypisanie liczb podzielnych przez 3 i 5 do n
    void zadanie5_4() {
        int n;
        cout << "Zadanie 5.4: Liczby podzielne przez 3 i 5 do n." << endl;
        cout << "Podaj n: ";
        cin >> n;
        cout << "Liczby podzielne przez 3 i 5: ";
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0 && i % 5 == 0) cout << i << " ";
        }
        cout << endl;
    }

    // Zadanie 5.6 - sprawdzanie parzystości trzema metodami (bitowo, modulo, warunkowo)
    void zadanie5_6() {
        int liczba;
        cout << "Zadanie 5.6: Sprawdzenie parzystosci trzema metodami." << endl;
        cout << "Podaj liczbe: ";
        cin >> liczba;

        cout << "(a) Bitowo: " << ((liczba & 1) == 0 ? "Parzysta" : "Nieparzysta") << endl;
        cout << "(b) Modulo: " << ((liczba % 2 == 0) ? "Parzysta" : "Nieparzysta") << endl;
        cout << "(c) Operator warunkowy: " << (((liczba & 1) == 0) ? "Parzysta" : "Nieparzysta") << endl;
    }
};
