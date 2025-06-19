/**
 * @file ZadMainExample.cc
 * @author Franciszek Niedziela
 * @brief Program z funkcjami, w tym dwoma extern "C", wywoływanymi na podstawie argumentów main
 * @date 2025.06.19
 */
// zadanie 1.3
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Funkcje zadeklarowane jako extern "C"
extern "C" void funcC1() {
    cout << "Funkcja extern \"C\" funcC1 została wywołana." << endl;
}

extern "C" void funcC2() {
    cout << "Funkcja extern \"C\" funcC2 została wywołana." << endl;
}

// Funkcje normalne C++
void func1() {
    cout << "Funkcja func1 została wywołana." << endl;
}

void func2() {
    cout << "Funkcja func2 została wywołana." << endl;
}

void func3() {
    cout << "Funkcja func3 została wywołana." << endl;
}

// Funkcja pomocnicza do mapowania nazw na funkcje i ich wywołania
void callFunctionByName(const string& name) {
    if (name == "func1") {
        func1();
    } else if (name == "func2") {
        func2();
    } else if (name == "func3") {
        func3();
    } else if (name == "funcC1") {
        funcC1();
    } else if (name == "funcC2") {
        funcC2();
    } else {
        cout << "Nieznana funkcja: " << name << endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Brak argumentów. Podaj nazwy funkcji do wywołania." << endl;
        cout << "Dostępne funkcje: func1, func2, func3, funcC1, funcC2" << endl;
        return 1;
    }

    cout << "Wywołanie funkcji na podstawie argumentów:" << endl;
    for (int i = 1; i < argc; ++i) {
        string funcName = argv[i];
        callFunctionByName(funcName);
    }

    return 0;
}
// ./ZadMainExample func1 funcC2 func3
// Output:
// Wywołanie funkcji na podstawie argumentów:
// Funkcja func1 została wywołana.
// Funkcja extern "C" funcC2 została wywołana.
// Funkcja func3 została wywołana.
