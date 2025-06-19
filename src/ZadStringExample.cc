/**
 * @file ZadStringExample.cc
 * @author Franciszek Niedziela
 * @date 2025.06.19
 * @brief Demonstracja manipulacji stringami w C++ z użyciem różnych funkcji
 */
// zadanie 1.2
#include <iostream>
#include <string>
using namespace std;

// Funkcja demonstrująca wybrane funkcje manipulacji stringami
void stringManipulations() {
    cout << "\n--- Demonstracja funkcji manipulacyjnych na stringu ---\n";

    string s = "Przykladowy tekst do manipulacji";

    cout << "Początkowy string: \"" << s << "\"\n";

    // 1. empty()
    cout << "Czy string jest pusty? " << (s.empty() ? "Tak" : "Nie") << endl;

    // 2. size() i length()
    cout << "Długość stringa (size): " << s.size() << endl;
    cout << "Długość stringa (length): " << s.length() << endl;

    // 3. at()
    try {
        cout << "Znak na pozycji 5 (at): '" << s.at(5) << "'" << endl;
        // Próba dostępu poza zakres (odkomentować, aby zobaczyć wyjątek)
        // cout << s.at(100) << endl;
    } catch (const out_of_range& e) {
        cout << "Wyjątek: " << e.what() << endl;
    }

    // 4. clear()
    string s2 = s; // kopia do demonstracji clear()
    s2.clear();
    cout << "Po wywołaniu clear(), s2 jest pusty? " << (s2.empty() ? "Tak" : "Nie") << endl;

    // 5. erase(...)
    string s3 = s;
    s3.erase(10, 7); // usuwa 7 znaków od indeksu 10
    cout << "Po erase(10,7): \"" << s3 << "\"" << endl;

    // 6. find(...)
    size_t pos = s.find("tekst");
    if (pos != string::npos)
        cout << "Podciąg \"tekst\" znaleziony na pozycji: " << pos << endl;
    else
        cout << "Podciąg \"tekst\" nie znaleziony" << endl;

    // 7. swap(...)
    string a = "Ala ma kota";
    string b = "Kot ma Ale";
    cout << "Przed swap:\na = \"" << a << "\"\nb = \"" << b << "\"" << endl;
    a.swap(b);
    cout << "Po swap:\na = \"" << a << "\"\nb = \"" << b << "\"" << endl;

    // 8. substr(...)
    string sub = s.substr(11, 6); // od indeksu 11, 6 znaków
    cout << "Podciąg substr(11,6): \"" << sub << "\"" << endl;

    // 9. append(...)
    string s4 = "Hello";
    s4.append(", world!");
    cout << "Po append: \"" << s4 << "\"" << endl;

    cout << "--- Koniec demonstracji ---\n\n";
}

int main() {
    // Inicjalizacja stringów
    string napis1;
    napis1 = "text1";

    string napis2("text2");

    string napis3 = "text3";

    cout << "napis1: " << napis1 << endl
         << "napis2: " << napis2 << endl
         << "napis3: " << napis3 << endl;

    string napis4(10, 'X');
    cout << "napis4: " << napis4 << endl;

    cout << "\nManipulacja stringami" << endl;
    cout << "----------------------------------------" << endl;

    string a1, b1;
    a1 = '1';
    b1 = '2';
    a1 = b1;
    cout << "a1 = b1: " << a1 << endl;

    cout << "\nSprawdzenie adresow" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Address of a1: " << &a1 << endl;
    cout << "Address of b1: " << &b1 << endl;

    string a, b, c;
    a = "gosia";
    b = "iza";
    c = "gosia";

    cout << "\nPorownanie napisow" << endl;
    cout << "----------------------------------------" << endl;
    if (a == c)
        cout << "a i c sa takie same\n";
    if (a != b)
        cout << "a i b sa rozne\n";
    cout << "Address of a: " << &a << endl;
    cout << "Address of c: " << &c << endl;

    cout << "\nPrzyklad porzadku leksykograficznego" << endl;
    cout << "----------------------------------------" << endl;
    a = "adad";
    b = "aeac";
    c = "gosia";

    cout << "napis a (" << a << ") poprzedza napis b (" << b << "): ";
    if (a < b)
        cout << "prawda\n";
    else
        cout << "nieprawda\n";

    a = "mal" + a;

    cout << "napis a (" << a << ") poprzedza napis b (" << b << "): ";
    if (a < b)
        cout << "prawda\n";
    else
        cout << "nieprawda\n";

    b[1] = '_';
    cout << "zmieniony wyraz b: " << b << '\n';

    // Wywołanie funkcji demonstrującej dodatkowe manipulacje
    stringManipulations();

    return 0;
}
// Output:
// napis1: text1
// napis2: text2
// napis3: text3
// napis4: XXXXXXXXXX

// Manipulacja stringami
// ----------------------------------------
// a1 = b1: 2

// Sprawdzenie adresow
// ----------------------------------------
// Address of a1: 0x6267bff690
// Address of b1: 0x6267bff670

// Porownanie napisow
// ----------------------------------------
// a i c sa takie same
// a i b sa rozne
// Address of a: 0x6267bff650
// Address of c: 0x6267bff610

// Przyklad porzadku leksykograficznego
// ----------------------------------------
// napis a (adad) poprzedza napis b (aeac): prawda
// napis a (maladad) poprzedza napis b (aeac): nieprawda
// zmieniony wyraz b: a_ac

// --- Demonstracja funkcji manipulacyjnych na stringu ---
// Początkowy string: "Przykladowy tekst do manipulacji"
// Czy string jest pusty? Nie
// Długość stringa (size): 32
// Długość stringa (length): 32
// Znak na pozycji 5 (at): 'l'
// Po wywołaniu clear(), s2 jest pusty? Tak
// Po erase(10,7): "Przykladow do manipulacji"
// Podciąg "tekst" znaleziony na pozycji: 12
// Przed swap:
// a = "Ala ma kota"
// b = "Kot ma Ale"
// Po swap:
// a = "Kot ma Ale"
// b = "Ala ma kota"
// Podciąg substr(11,6): " tekst"
// Po append: "Hello, world!"
// --- Koniec demonstracji ---
