/**
 * @file LManipulacjaStrumieniemCout.cc
 * @brief Przykład manipulacji strumieniem cout: setw, setprecision, setfill, fixed, scientific, hex, dec itd.
 * @author Franciszek Niedziela
 */
// zadanie 4.1
#include <iostream>
#include <iomanip>  // dla manipulatorów
using namespace std;

int main() {
    // Przykładowe dane - wyniki działań (nie sztuczne wartości)
    double output = 12.3456789 / 0.56;   // wynik jakiegoś działania
    double T_output = 3.1415926535 / 2;  // inny wynik

    double output1 = 1.23456789 * 3.2;
    double T_output1 = 12.3456789 / 0.56;

    double output2 = 2.3456789 / 1.5;
    double T_output2 = 23.456789 / 3.5;

    // average - średnia z output1 i output2
    double average = (output1 + output2) / 2.0;
    double T_average = (T_output1 + T_output2) / 2.0;

    cout << setfill('=') << setw(50) << "" << endl;
    cout << setfill(' ') << fixed;  // ustawiamy fixed i wypełnienie spacji

    cout << "Wynik naszego działania: x.xxxxx jest niepoprawny ale:" << endl;

    // output:   xx.xxx    T:  x.xxx 
    cout << "   output: "
         << setw(7) << setprecision(3) << output
         << "   T: "
         << setw(6) << setprecision(3) << T_output << endl;

    // output1:   x.xxxx   T: xx.xxxxx
    cout << "   output1: "
         << setw(7) << setprecision(4) << output1
         << "   T: "
         << setw(8) << setprecision(5) << T_output1 << endl;

    // output2:   x.xxxx   T: xx.xxxxxx
    cout << "   output2: "
         << setw(7) << setprecision(4) << output2
         << "   T: "
         << setw(9) << setprecision(6) << T_output2 << endl;

    cout << "   ---------------------------------" << endl;

    // average:  xx.xxxx   T: xx.xxxxxx
    cout << "   average: "
         << setw(7) << setprecision(4) << average
         << "   T: "
         << setw(9) << setprecision(6) << T_average << endl;

    cout << setfill('=') << setw(50) << "" << endl;

    // Dodatkowo pokażemy inne manipulatory, aby pokazać ich działanie:

    cout << "\nDodatkowe przykłady manipulacji:" << endl;

    int liczba = 255;

    cout << "Liczba w hex (z prefiksem 0x): 0x" << hex << liczba << dec << endl;

    cout << "Liczba w dec: " << liczba << endl;

    double d = 12345.6789;

    cout << fixed << setprecision(2);
    cout << "fixed, precision(2): " << d << endl;

    cout << scientific << setprecision(4);
    cout << "scientific, precision(4): " << d << endl;

    cout << resetiosflags(ios::fixed | ios::scientific);
    cout << "domyślny format: " << d << endl;

    cout << "setw(10), setfill('*'): " << setw(10) << setfill('*') << liczba << endl;

    cout << setfill(' ') << endl; // reset fill na spację

    return 0;
}
// Output:
// ==================================================
// Wynik naszego działania: x.xxxxx jest niepoprawny ale:
//    output:  22.046   T:  1.571
//    output1:  3.9506   T: 22.04586
//    output2:  1.5638   T:  6.701940
//    ---------------------------------
//    average:  2.7572   T: 14.373897
// ==================================================

// Dodatkowe przykłady manipulacji:
// Liczba w hex (z prefiksem 0x): 0xff
// Liczba w dec: 255
// fixed, precision(2): 12345.68
// scientific, precision(4): 1.2346e+04
// domyślny format: 1.235e+04
// setw(10), setfill('*'): *******255
