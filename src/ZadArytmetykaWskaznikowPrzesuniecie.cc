/**
 * @file ZadArytmetykaWskaznikowPrzesuniecie.cc
 * @brief Przesunięcie elementów tablicy o jedno miejsce w prawo za pomocą wskaźników
 */
// zadanie 3.4
#include <iostream>
using namespace std;

// Funkcja przesuwająca elementy tablicy o jedno miejsce w prawo
void przesun(int* tab, int rozmiar) {
    if (tab == nullptr || rozmiar <= 1)
        return;

    // Zachowujemy ostatni element
    int ostatni = *(tab + rozmiar - 1);

    // Przesuwamy pozostałe elementy w prawo
    for (int i = rozmiar - 1; i > 0; --i) {
        *(tab + i) = *(tab + i - 1);
    }

    // Umieszczamy ostatni element na początku
    *tab = ostatni;
}

int main() {
    int tablica[] = {1, 2, 3, 4, 5};
    int rozmiar = sizeof(tablica) / sizeof(tablica[0]);

    cout << "Tablica przed przesunięciem: ";
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    przesun(tablica, rozmiar);

    cout << "Tablica po przesunięciu o jedno miejsce w prawo: ";
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    return 0;
}
// Output:
// Tablica przed przesunięciem: 1 2 3 4 5 
// Tablica po przesunięciu o jedno miejsce w prawo: 5 1 2 3 4
