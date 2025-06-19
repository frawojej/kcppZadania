/**
 * @file ZadPetle.cc
 * @brief Pokaz działania pętli while, do-while i for z użyciem break, continue i return
 *        Każda pętla w osobnej funkcji (a, b, c)
 * @author Franciszek Niedziela
 */
// zadanie 4.9
#include <iostream>
using namespace std;

// (a) while z i++ i ++i, break, continue, return
void petlaWhile() {
    cout << "Pętla while z i++ i ++i, break, continue, return:" << endl;
    int i = 0;

    while (i < 10) {
        // Przykład i++ - wartość i jest używana przed inkrementacją
        cout << "while i++: " << i++ << endl;

        if (i == 5) {
            cout << "continue przy i == 5" << endl;
            continue; // pomija resztę pętli i przechodzi do kolejnej iteracji
        }

        if (i == 7) {
            cout << "break przy i == 7" << endl;
            break; // przerywa pętlę
        }

        if (i == 8) {
            cout << "return przy i == 8 (zakończenie funkcji)" << endl;
            return; // wychodzi z funkcji
        }

        // Przykład ++i - wartość i jest inkrementowana przed użyciem
        cout << "while ++i: " << ++i << endl;
    }
    cout << "Koniec petlaWhile()" << endl;
}

// (b) do-while z i++ i ++i, break, continue, return
void petlaDoWhile() {
    cout << "Pętla do-while z i++ i ++i, break, continue, return:" << endl;
    int i = 0;

    do {
        cout << "do-while i++: " << i++ << endl;

        if (i == 5) {
            cout << "continue przy i == 5" << endl;
            continue; // przejdzie do warunku pętli
        }

        if (i == 7) {
            cout << "break przy i == 7" << endl;
            break;
        }

        if (i == 8) {
            cout << "return przy i == 8 (zakończenie funkcji)" << endl;
            return;
        }

        cout << "do-while ++i: " << ++i << endl;

    } while (i < 10);

    cout << "Koniec petlaDoWhile()" << endl;
}

// (c) for z break, continue, return
void petlaFor() {
    cout << "Pętla for z break, continue, return:" << endl;

    for (int i = 0; i < 10; ++i) {
        cout << "for i: " << i << endl;

        if (i == 3) {
            cout << "continue przy i == 3" << endl;
            continue; // pomija resztę pętli i przechodzi do następnej iteracji
        }

        if (i == 6) {
            cout << "break przy i == 6" << endl;
            break; // przerywa pętlę
        }

        if (i == 8) {
            cout << "return przy i == 8 (zakończenie funkcji)" << endl;
            return; // wychodzi z funkcji
        }
    }

    cout << "Koniec petlaFor()" << endl;
}

int main() {
    petlaWhile();
    cout << "-------------------------" << endl;
    petlaDoWhile();
    cout << "-------------------------" << endl;
    petlaFor();

    return 0;
}
// Output:
// Pętla while z i++ i ++i, break, continue, return:
// while i++: 0
// while ++i: 2
// while i++: 2
// while ++i: 4
// while i++: 4
// continue przy i == 5
// while i++: 5
// while ++i: 7
// while i++: 7
// return przy i == 8 (zakończenie funkcji)
// -------------------------
// Pętla do-while z i++ i ++i, break, continue, return:
// do-while i++: 0
// do-while ++i: 2
// do-while i++: 2
// do-while ++i: 4
// do-while i++: 4
// continue przy i == 5
// do-while i++: 5
// do-while ++i: 7
// do-while i++: 7
// return przy i == 8 (zakończenie funkcji)
// -------------------------
// Pętla for z break, continue, return:
// for i: 0
// for i: 1
// for i: 2
// for i: 3
// continue przy i == 3
// for i: 4
// for i: 5
// for i: 6
// break przy i == 6
// Koniec petlaFor()
