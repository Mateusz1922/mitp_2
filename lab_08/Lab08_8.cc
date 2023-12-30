//============================================================================
// Name        : Lab8.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on reference and dereference
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int *x;
  int y = 2;

  x = &y;
  // x = y; // rozne typy
  *x = y;
  //*x = &y; // przypisanie adresu do wartosci

  std::cout << "Wartosc zmiennej: " << y << ", Adres zmiennej: " << &y << ", Adres wskazywany przez wskaznik: " << x << ", Wartosc wskaznika: " << *x;

  return 0;
}
