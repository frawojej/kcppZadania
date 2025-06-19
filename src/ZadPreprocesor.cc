/**
 * @file ZadPreprocesor.cc
 * @brief Przykład zastosowania dyrektyw preprocesora: #ifdef, #ifndef, #define,
 *        makr, operatorów # i ## oraz porównanie z funkcjami zwykłymi
 * @author Franciszek Niedziela
 */
// zadanie 4.17
#include <iostream>
using namespace std;

// (a) Definicja makra do obliczania kwadratu liczby
#define KWADRAT(x) ((x) * (x))

// (b) Definicja makra z użyciem operatorów # i ##
// # zamienia argument na string
// ## łączy dwa tokeny w jeden

#define TO_STRING(x) #x
#define CONCAT(a, b) a##b

// Dla porównania: zwykła funkcja do obliczania kwadratu
int kwadrat_func(int x) {
    return x * x;
}

int main() {
    int a = 5;

    cout << "Przyklad makra KWADRAT(" << a << "): " << KWADRAT(a) << endl;
    cout << "Przyklad funkcji kwadrat_func(" << a << "): " << kwadrat_func(a) << endl;

    // Użycie operatora # - zamiana argumentu na string
    cout << "Przyklad operatora #: TO_STRING(Hello) = " << TO_STRING(Hello) << endl;

    // Użycie operatora ## - konkatenacja tokenów
    int xy = 100;
    cout << "Przyklad operatora ##: CONCAT(x, y) = " << CONCAT(x, y) << endl;

    // Przykład użycia #ifdef i #ifndef
    #define TEST_DEFINED

    #ifdef TEST_DEFINED
        cout << "#ifdef: TEST_DEFINED jest zdefiniowane" << endl;
    #else
        cout << "#ifdef: TEST_DEFINED nie jest zdefiniowane" << endl;
    #endif

    #ifndef TEST_NOT_DEFINED
        cout << "#ifndef: TEST_NOT_DEFINED nie jest zdefiniowane" << endl;
    #else
        cout << "#ifndef: TEST_NOT_DEFINED jest zdefiniowane" << endl;
    #endif

    return 0;
}
// Output:
// Przyklad makra KWADRAT(5): 25
// Przyklad funkcji kwadrat_func(5): 25
// Przyklad operatora #: TO_STRING(Hello) = Hello
// Przyklad operatora ##: CONCAT(x, y) = 100
// #ifdef: TEST_DEFINED jest zdefiniowane
// #ifndef: TEST_NOT_DEFINED nie jest zdefiniowane
