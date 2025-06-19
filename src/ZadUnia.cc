/**
 * @file ZadUnia.cc
 * @brief Program demonstrujący działanie unii w C++ oraz związane z nimi niebezpieczeństwa
 * @author Franciszek Niedziela
 */
// zadanie 5.3
#include <iostream>
#include <cstring> // dla memcpy
using namespace std;

union Unia {
    int calkowita;
    double rzeczywista;
    char znak;
};

int main() {
    Unia u;
    
    // 1. Podstawowe użycie unii
    u.calkowita = 65;
    cout << "Wartość całkowita: " << u.calkowita << endl;
    cout << "Wartość rzeczywista: " << u.rzeczywista << " (niezdefiniowane zachowanie!)" << endl;
    cout << "Wartość znakowa: " << u.znak << endl << endl;

    // 2. Problem nadpisywania wartości
    u.rzeczywista = 3.14159;
    cout << "Po przypisaniu double:" << endl;
    cout << "Wartość całkowita: " << u.calkowita << " (uszkodzone dane!)" << endl;
    cout << "Wartość rzeczywista: " << u.rzeczywista << endl << endl;

    // 3. Niebezpieczeństwo interpretacji danych
    u.znak = 'A';
    cout << "Po przypisaniu char:" << endl;
    cout << "Wartość całkowita: " << u.calkowita << " (błędna interpretacja!)" << endl;
    cout << "Wartość znakowa: " << u.znak << endl << endl;

    // 4. Poprawne użycie z dyskryminatorem
    enum class TypDanych { CALKOWITA, RZECZYWISTA, ZNAK };
    struct BezpiecznaUnia {
        TypDanych typ;
        union {
            int calkowita;
            double rzeczywista;
            char znak;
        };
    };

    BezpiecznaUnia bu;
    bu.typ = TypDanych::RZECZYWISTA;
    bu.rzeczywista = 2.71828;

    cout << "Bezpieczne użycie z dyskryminatorem:" << endl;
    if (bu.typ == TypDanych::RZECZYWISTA) {
        cout << "Wartość rzeczywista: " << bu.rzeczywista << endl;
    } else {
        cout << "Błędny typ danych!" << endl;
    }

    // 5. Problem rozmiaru i wyrównania
    cout << "\nRozmiary typów:" << endl;
    cout << "int: " << sizeof(int) << " bajty" << endl;
    cout << "double: " << sizeof(double) << " bajty" << endl;
    cout << "char: " << sizeof(char) << " bajt" << endl;
    cout << "Unia: " << sizeof(Unia) << " bajty (rozmiar największego elementu)" << endl;

    // 6. Problem kopiowania
    Unia u2;
    memcpy(&u2, &u, sizeof(u));
    cout << "\nPo kopiowaniu: " << u2.znak << endl;

    return 0;
}
// Output:
// Wartość całkowita: 65
// Wartość rzeczywista: 1.47479e-311 (niezdefiniowane zachowanie!)
// Wartość znakowa: A

// Po przypisaniu double:
// Wartość całkowita: -266631570 (uszkodzone dane!)
// Wartość rzeczywista: 3.14159

// Po przypisaniu char:
// Wartość całkowita: -266631615 (błędna interpretacja!)
// Wartość znakowa: A

// Bezpieczne użycie z dyskryminatorem:
// Wartość rzeczywista: 2.71828

// Rozmiary typów:
// int: 4 bajty
// double: 8 bajty
// char: 1 bajt
// Unia: 8 bajty (rozmiar największego elementu)

// Po kopiowaniu: A
