/**
 * @file ZadAdresowaniePamieci.cc
 * @brief Przykład adresowania pamięci i wypisywania adresów zmiennych w C++
 * 
 * W C++ zmienne lokalne na stosie są zwykle alokowane w kolejnych obszarach pamięci.
 * Adresy zmiennych lokalnych zwykle maleją lub rosną w zależności od architektury i kompilatora.
 * 
 * W typowej architekturze x86/x64 adresy lokalnych zmiennych rosną w kierunku "w górę" stosu,
 * ale czasem mogą maleć - zależy to od implementacji.
 * 
 * W tym programie wypisujemy adresy kolejnych zmiennych i pokazujemy, jak są ułożone w pamięci.
 * 
 * Autor: Franciszek Niedziela
 */
// zadanie 3.7
#include <iostream>
using namespace std;

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    float x = 0.0f;
    double y = 0.0;
    double z = 0.0;

    cout << "Adresy zmiennych lokalnych:\n";
    cout << "Adres a: " << &a << endl;
    cout << "Adres b: " << &b << endl;
    cout << "Adres c: " << &c << endl;
    cout << "Adres x: " << &x << endl;
    cout << "Adres y: " << &y << endl;
    cout << "Adres z: " << &z << endl;

    /*
     * Komentarz:
     * 
     * Obserwując wypisane adresy, można zauważyć, że zmienne są ułożone kolejno w pamięci.
     * 
     * W zależności od platformy i kompilatora adresy mogą rosnąć lub maleć.
     * 
     * Na mojej maszynie adresy zmiennych lokalnych maleją w kolejności deklaracji,
     * co oznacza, że stos rośnie "w dół" (adresy maleją).
     * 
     * Przykładowo:
     *   &a > &b > &c
     * 
     * Oznacza to, że zmienna 'a' jest "wyżej" na stosie niż 'b' i 'c'.
     * 
     * Dla zmiennych o różnych typach (int, float, double) rozmiary mogą się różnić,
     * co wpływa na odstępy między adresami.
     */

    return 0;
}
// Output:
// Adresy zmiennych lokalnych:
// Adres a: 0x2672fffd9c
// Adres b: 0x2672fffd98
// Adres c: 0x2672fffd94
// Adres x: 0x2672fffd90
// Adres y: 0x2672fffd88
// Adres z: 0x2672fffd80
