/**
 * @file ZadOperatoryPrzypisania.cc
 * @brief Przykłady operatorów arytmetycznych i przypisania w osobnych funkcjach
 * @author Franciszek Niedziela
 */
// zadanie 3.12
#include <iostream>
using namespace std;

// Funkcja demonstrująca operatory arytmetyczne
void OperatoryArytmetyczne() {
    int a = 10, b = 3;

    cout << "Operatory arytmetyczne:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (dzielenie całkowite)" << endl;
    cout << "a % b = " << (a % b) << " (reszta z dzielenia)" << endl;
    cout << "++a = " << (++a) << " (inkrementacja przed)" << endl;
    cout << "b-- = " << (b--) << " (dekrementacja po)" << endl;
    cout << "b po dekrementacji = " << b << endl;
    cout << endl;
}

// Funkcja demonstrująca operatory przypisania
void OperatoryPrzypisania() {
    int a = 5, b = 10;

    cout << "Operatory przypisania:" << endl;
    cout << "Początkowo: a = " << a << ", b = " << b << endl;

    a += b; // a = a + b
    cout << "a += b => a = " << a << endl;

    a -= 3; // a = a - 3
    cout << "a -= 3 => a = " << a << endl;

    a *= 2; // a = a * 2
    cout << "a *= 2 => a = " << a << endl;

    a /= 4; // a = a / 4
    cout << "a /= 4 => a = " << a << endl;

    a %= 3; // a = a % 3
    cout << "a %= 3 => a = " << a << endl;

    a = 1;
    a <<= 2; // a = a << 2 (przesunięcie bitowe w lewo)
    cout << "a <<= 2 => a = " << a << endl;

    a >>= 1; // a = a >> 1 (przesunięcie bitowe w prawo)
    cout << "a >>= 1 => a = " << a << endl;

    a &= 3; // a = a & 3 (AND bitowy)
    cout << "a &= 3 => a = " << a << endl;

    a |= 1; // a = a | 1 (OR bitowy)
    cout << "a |= 1 => a = " << a << endl;

    a ^= 2; // a = a ^ 2 (XOR bitowy)
    cout << "a ^= 2 => a = " << a << endl;

    cout << endl;
}

int main() {
    OperatoryArytmetyczne();
    OperatoryPrzypisania();

    return 0;
}
// Output:
// Operatory arytmetyczne:
// a = 10, b = 3
// a + b = 13
// a - b = 7
// a * b = 30
// a / b = 3 (dzielenie całkowite)
// a % b = 1 (reszta z dzielenia)
// ++a = 11 (inkrementacja przed)
// b-- = 3 (dekrementacja po)
// b po dekrementacji = 2

// Operatory przypisania:
// Początkowo: a = 5, b = 10
// a += b => a = 15
// a -= 3 => a = 12
// a *= 2 => a = 24
// a /= 4 => a = 6
// a %= 3 => a = 0
// a <<= 2 => a = 4
// a >>= 1 => a = 2
// a &= 3 => a = 2
// a |= 1 => a = 3
// a ^= 2 => a = 1
