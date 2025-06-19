/**
 * @file ZadFriendship.cc
 * @brief Demonstracja działania przyjaźni klas w C++
 *        - Klasa B jest zaprzyjaźniona z klasą A i ma dostęp do jej prywatnych składników
 *        - Sprawdzenie czy przyjaźń jest obustronna (nie jest)
 * @author Franciszek Niedziela
 */
// zadanie 5.5
#include <iostream>
using namespace std;

class A {
private:
    int prywatnaA;

public:
    A(int val) : prywatnaA(val) {}

    // Deklarujemy klasę B jako przyjaciela, aby B miał dostęp do prywatnych pól A
    friend class B;

    // Metoda do odczytu prywatnej zmiennej (dla porównania)
    int getPrywatnaA() const {
        return prywatnaA;
    }
};

class B {
private:
    int prywatnaB;

public:
    B(int val) : prywatnaB(val) {}

    // Klasa B ma dostęp do prywatnych pól klasy A, ponieważ jest jej przyjacielem
    void pokazPrywatnaA(const A& a) {
        cout << "Dostęp klasy B do prywatnej zmiennej klasy A: " << a.prywatnaA << endl;
    }

    // Sprawdzamy czy A ma dostęp do prywatnej zmiennej B bez przyjaźni - NIE MA
    void pokazPrywatnaB() const {
        cout << "Prywatna zmienna klasy B: " << prywatnaB << endl;
    }
};

int main() {
    A obiektA(10);
    B obiektB(20);

    cout << "Klasa B uzyskuje dostęp do prywatnej zmiennej klasy A:" << endl;
    obiektB.pokazPrywatnaA(obiektA);

    cout << "\nCzy klasa A ma dostęp do prywatnej zmiennej klasy B bez przyjaźni?" << endl;
    // Poniższy kod NIE zadziała, ponieważ A nie jest przyjacielem B
    // cout << obiektA.prywatnaB; // Błąd kompilacji!

    // Aby to pokazać, spróbujemy odczytać prywatną zmienną B z klasy A - nie jest to możliwe
    // Możemy natomiast wywołać publiczną metodę klasy B, która zwraca wartość
    cout << "Dostęp do prywatnej zmiennej klasy B przez publiczną metodę: ";
    obiektB.pokazPrywatnaB();

    return 0;
}
// Output:
// Klasa B uzyskuje dostęp do prywatnej zmiennej klasy A:
// Dostęp klasy B do prywatnej zmiennej klasy A: 10

// Czy klasa A ma dostęp do prywatnej zmiennej klasy B bez przyjaźni?
// Dostęp do prywatnej zmiennej klasy B przez publiczną metodę: Prywatna zmienna klasy B: 20
