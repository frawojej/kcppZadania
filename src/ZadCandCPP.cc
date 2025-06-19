/**
 * @file ZadCandCPP.cc
 * @brief Pokazanie wykonania tych samych operacji w C i C++ (kcpp02::34)
 * @author Franciszek Niedziela
 */
// zadanie 4.3
#include <iostream>
#include <cstdio>   // dla funkcji C: printf, scanf
using namespace std;

void operacjeC() {
    printf("Operacje w stylu C:\n");

    int a, b;
    printf("Podaj dwie liczby całkowite: ");
    scanf("%d %d", &a, &b);

    printf("Suma: %d\n", a + b);
    printf("Różnica: %d\n", a - b);
    printf("Iloczyn: %d\n", a * b);

    if (b != 0) {
        printf("Iloraz: %.2f\n", (float)a / b);
    } else {
        printf("Dzielenie przez zero!\n");
    }
}

void operacjeCPP() {
    cout << "\nOperacje w stylu C++:" << endl;

    int a, b;
    cout << "Podaj dwie liczby całkowite: ";
    cin >> a >> b;

    cout << "Suma: " << (a + b) << endl;
    cout << "Różnica: " << (a - b) << endl;
    cout << "Iloczyn: " << (a * b) << endl;

    if (b != 0) {
        cout << "Iloraz: " << static_cast<float>(a) / b << endl;
    } else {
        cout << "Dzielenie przez zero!" << endl;
    }
}

int main() {
    operacjeC();
    operacjeCPP();

    return 0;
}
// Output:
// Operacje w stylu C:
// Podaj dwie liczby całkowite: 2
// 3
// Suma: 5
// Różnica: -1
// Iloczyn: 6
// Iloraz: 0.67

// Operacje w stylu C++:        
// Podaj dwie liczby całkowite: 2
// 3
// Suma: 5
// Różnica: -1
// Iloczyn: 6
// Iloraz: 0.666667
