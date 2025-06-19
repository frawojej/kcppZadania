/**
 * @file ZadCinCoutFile.cc
 * @brief Przykład wypisywania na ekran, zapisywania do strumienia błędów,
 *        zapisywania do pliku oraz odczytywania z pliku
 * @author Franciszek Niedziela
 */
// zadanie 4.2
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // 1. Wypisywanie na ekran (cout)
    cout << "To jest wypisane na ekran (cout)." << endl;

    // 2. Zapisywanie do strumienia błędów (cerr)
    cerr << "To jest komunikat błędu (cerr)." << endl;

    // 3. Zapisywanie do pliku
    ofstream plikWy("dane.txt");
    if (!plikWy) {
        cerr << "Nie można otworzyć pliku do zapisu!" << endl;
        return 1;
    }
    plikWy << "Linia 1: zapis do pliku." << endl;
    plikWy << "Linia 2: druga linia w pliku." << endl;
    plikWy.close();

    cout << "Dane zostały zapisane do pliku 'dane.txt'." << endl;

    // 4. Odczytywanie z pliku
    ifstream plikWe("dane.txt");
    if (!plikWe) {
        cerr << "Nie można otworzyć pliku do odczytu!" << endl;
        return 1;
    }

    cout << "Zawartość pliku 'dane.txt':" << endl;
    string linia;
    while (getline(plikWe, linia)) {
        cout << linia << endl;
    }
    plikWe.close();

    return 0;
}
// Output:
// To jest wypisane na ekran (cout).
// To jest komunikat błędu (cerr).
// Dane zostały zapisane do pliku 'dane.txt'.
// Zawartość pliku 'dane.txt':
// Linia 1: zapis do pliku.
// Linia 2: druga linia w pliku.
