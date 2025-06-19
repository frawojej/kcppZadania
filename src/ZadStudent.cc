/**
 * @file ZadStudent.cc
 * @brief Prosta baza studentów z wykorzystaniem std::vector i struct Student
 *        Funkcjonalność:
 *        - Dodaj studenta (imię, nazwisko, numer indeksu)
 *        - Usuń studenta po numerze indeksu
 *        - Wyświetl listę studentów
 *        - Sortuj listę alfabetycznie po nazwisku i imieniu
 *        - Sprawdź, czy student istnieje po numerze indeksu
 *        Walidacja danych: imię i nazwisko niepuste, numer indeksu unikalny
 * @author Franciszek Niedziela
 */
// zadanie 4.16
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    string nrIndeksu;
};

// Funkcja do porównywania studentów wg nazwiska, potem imienia (alfabetycznie)
bool porownajStudentow(const Student &a, const Student &b) {
    if (a.nazwisko != b.nazwisko)
        return a.nazwisko < b.nazwisko;
    return a.imie < b.imie;
}

// Sprawdza, czy numer indeksu jest unikalny na liście
bool czyIndeksUnikalny(const vector<Student> &lista, const string &nrIndeksu) {
    return find_if(lista.begin(), lista.end(),
                   [&](const Student &s) { return s.nrIndeksu == nrIndeksu; }) == lista.end();
}

// Szuka studenta po numerze indeksu, zwraca iterator lub lista.end()
auto znajdzStudentaPoIndeksie(vector<Student> &lista, const string &nrIndeksu) {
    return find_if(lista.begin(), lista.end(),
                   [&](const Student &s) { return s.nrIndeksu == nrIndeksu; });
}

int main() {
    vector<Student> listaStudentow;
    int wybor;

    cout << "=== Prosta baza studentow ===" << endl;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Dodaj studenta" << endl;
        cout << "2. Usun studenta (po numerze indeksu)" << endl;
        cout << "3. Wyswietl liste studentow" << endl;
        cout << "4. Sortuj liste (alfabetycznie wg nazwiska i imienia)" << endl;
        cout << "5. Sprawdz, czy student istnieje (po numerze indeksu)" << endl;
        cout << "0. Wyjdz" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;
        cin.ignore(); // aby uniknąć problemów z getline()

        switch (wybor) {
        case 1: { // Dodaj studenta
            Student nowy;
            cout << "Podaj imie: ";
            getline(cin, nowy.imie);
            if (nowy.imie.empty()) {
                cout << "Imie nie moze byc puste!" << endl;
                break;
            }

            cout << "Podaj nazwisko: ";
            getline(cin, nowy.nazwisko);
            if (nowy.nazwisko.empty()) {
                cout << "Nazwisko nie moze byc puste!" << endl;
                break;
            }

            cout << "Podaj numer indeksu: ";
            getline(cin, nowy.nrIndeksu);
            if (nowy.nrIndeksu.empty()) {
                cout << "Numer indeksu nie moze byc pusty!" << endl;
                break;
            }

            if (!czyIndeksUnikalny(listaStudentow, nowy.nrIndeksu)) {
                cout << "Numer indeksu musi byc unikalny! Student o takim indeksie juz istnieje." << endl;
                break;
            }

            listaStudentow.push_back(nowy);
            cout << "Dodano studenta: " << nowy.imie << " " << nowy.nazwisko << ", indeks: " << nowy.nrIndeksu << endl;
            break;
        }
        case 2: { // Usun studenta po numerze indeksu
            if (listaStudentow.empty()) {
                cout << "Lista jest pusta!" << endl;
                break;
            }
            string nrIndeksu;
            cout << "Podaj numer indeksu studenta do usuniecia: ";
            getline(cin, nrIndeksu);

            auto it = znajdzStudentaPoIndeksie(listaStudentow, nrIndeksu);
            if (it != listaStudentow.end()) {
                cout << "Usunieto studenta: " << it->imie << " " << it->nazwisko << ", indeks: " << it->nrIndeksu << endl;
                listaStudentow.erase(it);
            } else {
                cout << "Nie znaleziono studenta o numerze indeksu " << nrIndeksu << "!" << endl;
            }
            break;
        }
        case 3: { // Wyswietl liste
            if (listaStudentow.empty()) {
                cout << "Lista jest pusta!" << endl;
            } else {
                cout << "\nLista studentow:" << endl;
                for (const auto &s : listaStudentow) {
                    cout << "- " << s.imie << " " << s.nazwisko << ", indeks: " << s.nrIndeksu << endl;
                }
            }
            break;
        }
        case 4: { // Sortuj liste
            sort(listaStudentow.begin(), listaStudentow.end(), porownajStudentow);
            cout << "Posortowano liste studentow alfabetycznie wg nazwiska i imienia." << endl;
            break;
        }
        case 5: { // Sprawdz czy student istnieje po numerze indeksu
            if (listaStudentow.empty()) {
                cout << "Lista jest pusta!" << endl;
                break;
            }
            string nrIndeksu;
            cout << "Podaj numer indeksu studenta do sprawdzenia: ";
            getline(cin, nrIndeksu);

            auto it = znajdzStudentaPoIndeksie(listaStudentow, nrIndeksu);
            if (it != listaStudentow.end()) {
                cout << "Student istnieje: " << it->imie << " " << it->nazwisko << ", indeks: " << it->nrIndeksu << endl;
            } else {
                cout << "Nie ma studenta o numerze indeksu " << nrIndeksu << " na liscie." << endl;
            }
            break;
        }
        case 0: {
            cout << "Koniec programu." << endl;
            break;
        }
        default: {
            cout << "Nieprawidlowa opcja!" << endl;
        }
        }
    } while (wybor != 0);

    return 0;
}
// Output:
// === Prosta baza studentow ===

// Menu:
// 1. Dodaj studenta
// 2. Usun studenta (po numerze indeksu)
// 3. Wyswietl liste studentow
// 4. Sortuj liste (alfabetycznie wg nazwiska i imienia)
// 5. Sprawdz, czy student istnieje (po numerze indeksu)
// 0. Wyjdz
// Wybierz opcje: 1
// Podaj imie: Jan
// Podaj nazwisko: Kowalski
// Podaj numer indeksu: 123456
// Dodano studenta: Jan Kowalski, indeks: 123456

// Menu:
// 1. Dodaj studenta
// 2. Usun studenta (po numerze indeksu)
// 3. Wyswietl liste studentow
// 4. Sortuj liste (alfabetycznie wg nazwiska i imienia)
// 5. Sprawdz, czy student istnieje (po numerze indeksu)
// 0. Wyjdz
// Wybierz opcje: 3

// Lista studentow:
// - Jan Kowalski, indeks: 123456

// Menu:
// 1. Dodaj studenta
// 2. Usun studenta (po numerze indeksu)
// 3. Wyswietl liste studentow
// 4. Sortuj liste (alfabetycznie wg nazwiska i imienia)
// 5. Sprawdz, czy student istnieje (po numerze indeksu)
// 0. Wyjdz
// Wybierz opcje: 0
// Koniec programu.
