/**
 * @file ZadArytmetykaWskaznikowZamiana.cc
 * @brief Zamiana miejscami dwóch liczb za pomocą wskaźników
 */
// zadanie 3.1
#include <iostream>
using namespace std;

// Funkcja zamieniająca wartości pod adresami a i b
void zamien(int* a, int* b) {
    if (a == nullptr || b == nullptr) return; // zabezpieczenie przed nullptr
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    cout << "Przed zamianą: x = " << x << ", y = " << y << endl;

    zamien(&x, &y);

    cout << "Po zamianie: x = " << x << ", y = " << y << endl;

    return 0;
}
// Output:
// Przed zamianą: x = 10, y = 20
// Po zamianie: x = 20, y = 10
