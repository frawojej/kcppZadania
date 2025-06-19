/**
 * @file ZadClassExample.cc
 * @author Franciszek Niedziela
 * @date 2025.06.19
 * @brief Prosty przykład klasy w jednym pliku, wzorowany na KviCar
 */
// zadanie 1.1
#include <iostream>
using namespace std;

class ZadCar {
public:
    // Konstruktor domyślny
    ZadCar() {
        cout << "ZadCar object has been created" << endl;
        fPlate = 0;
        fFakePlate = 0;
        fColor = 0;
    }

    // Destruktor
    ~ZadCar() {
        cout << "ZadCar object has been destroyed" << endl;
    }

    // Metody ustawiające (settery)
    void SetPlate(int rplate) {
        fPlate = rplate;
    }

    void SetFakePlate(int fplate) {
        fFakePlate = fplate;
    }

    void SetColor(int color) {
        fColor = color;
    }

    // Metody pobierające (gettery)
    int GetPlate() const {
        return fPlate;
    }

    int GetFakePlate() const {
        return fFakePlate;
    }

    int GetColor() const {
        return fColor;
    }

    // Metoda wypisująca informacje o samochodzie
    void Print() const {
        cout << "---------------------------------------" << endl;
        cout << "All about me:" << endl;
        cout << "---------------------------------------" << endl;
        cout << "Plate No.:     " << fPlate << endl;
        cout << "FakePlate No.: " << fFakePlate << endl;
        cout << "Color:         " << fColor << endl;
        cout << "---------------------------------------\n" << endl;
    }

private:
    int fPlate;
    int fFakePlate;
    int fColor;
};

int main() {
    ZadCar myCar;

    myCar.SetPlate(1234);
    myCar.SetFakePlate(5678);
    myCar.SetColor(42);

    myCar.Print();

    cout << "Plate number from getter: " << myCar.GetPlate() << endl;
    cout << "Fake plate number from getter: " << myCar.GetFakePlate() << endl;
    cout << "Color from getter: " << myCar.GetColor() << endl;

    return 0;
}
// Output:
// ZadCar object has been created
// ---------------------------------------
// All about me:
// ---------------------------------------
// Plate No.:     1234
// FakePlate No.: 5678
// Color:         42
// ---------------------------------------

// Plate number from getter: 1234
// Fake plate number from getter: 5678    
// Color from getter: 42
// ZadCar object has been destroyed       
