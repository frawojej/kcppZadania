/**
 * @file ZadEnumExample.cc
 * @author Franciszek Niedziela
 * @date 2025.06.19
 * @brief Przykład użycia enumów (scoped i unscoped) z miesiącami
 * @version v0.01
 */
// zadanie 1.0
#include <iostream>
using namespace std;

// Unscoped enum z miesiącami (wartości domyślne od 0)
enum Months {
  January,   // 0
  February,  // 1
  March,     // 2
  April,     // 3
  May,       // 4
  June,      // 5
  July,      // 6
  August,    // 7
  September, // 8
  October,   // 9
  November,  // 10
  December   // 11
};

// Scoped enum class z miesiącami (wartości jawne od 1)
enum class ScopedMonths {
  January = 1,
  February,
  March,
  April,
  May,
  June,
  July,
  August,
  September,
  October,
  November,
  December
};

// Funkcja pomocnicza do wypisywania nazw miesięcy (unscoped)
const char* monthName(Months m) {
  switch (m) {
    case January:   return "January";
    case February:  return "February";
    case March:     return "March";
    case April:     return "April";
    case May:       return "May";
    case June:      return "June";
    case July:      return "July";
    case August:    return "August";
    case September: return "September";
    case October:   return "October";
    case November:  return "November";
    case December:  return "December";
    default:        return "Unknown";
  }
}

// Funkcja pomocnicza do wypisywania nazw miesięcy (scoped)
const char* scopedMonthName(ScopedMonths m) {
  switch (m) {
    case ScopedMonths::January:   return "January";
    case ScopedMonths::February:  return "February";
    case ScopedMonths::March:     return "March";
    case ScopedMonths::April:     return "April";
    case ScopedMonths::May:       return "May";
    case ScopedMonths::June:      return "June";
    case ScopedMonths::July:      return "July";
    case ScopedMonths::August:    return "August";
    case ScopedMonths::September: return "September";
    case ScopedMonths::October:   return "October";
    case ScopedMonths::November:  return "November";
    case ScopedMonths::December:  return "December";
    default:                     return "Unknown";
  }
}

int main() {
  // Przykład użycia unscoped enum
  Months currentMonth = March;
  cout << "Unscoped enum: Current month is " << monthName(currentMonth)
       << " with value " << currentMonth << endl;

  // Przykład użycia scoped enum
  ScopedMonths nextMonth = ScopedMonths::April;
  cout << "Scoped enum: Next month is " << scopedMonthName(nextMonth)
       << " with value " << static_cast<int>(nextMonth) << endl;

  // Porównanie wartości enum
  if (currentMonth < static_cast<Months>(nextMonth)) {
    cout << monthName(currentMonth) << " comes before " << scopedMonthName(nextMonth) << endl;
  }

  return 0;
}
// Output:
// Unscoped enum: Current month is March with value 2
// Scoped enum: Next month is April with value 4     
// March comes before April
