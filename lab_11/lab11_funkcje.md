# Funkcje

Funkcje to pierwszy element pomocny w modularyzacji kodu.
Czynności wielokrotnie wykorzystywane w różnych częściach programu można zebrać w funkcjach.
Niektóre języki (np Haskell lub lisp), nazywane funkcyjnymi, budują cały program tylko z  funkcji.

## Zadania

Rozwiązanie każdego zadania zapisać jako plik `lab11_<NR_ZADANIA>_solved.cpp` i umieść w swojej gałęzi git. 

1. Zbudować i uruchomić program `lab11_1.cc`
1. Zmodyfikować `lab11_1.cc` tak, żeby deklaracja była przed funkcją `main` a definicja po funkcji `main`.
1. Zmodyfikować funkcję `_plus` w `lab11_1.cc` na `void eq_plus(int* a, int b)` która przypisuje wynik do pierwszego argumentu.
1. Dodać kolejną funkcję `_plus` w `lab11_1.cc` o sygnaturze `float _plus(float a, float b)`. Czy występuje konflikt nazw?
1. Zaimplementować funkcję `swap` podmieniającą argumenty przyjmowane przez wskaźniki.
1. Napisać kod implementujący obliczanie miejsc zerowych funkcji kwadratowej. W funkcji main proszę pobrać od użytkownika wartości `a, b i c` funkcji `ax^2+bx+c=0` i wywołać napisaną przez siebie funkcję obliczającą i wyświetlającą miejsca zerowe. W osobnej funkcji proszę zaimplementować obliczanie `delta`.
1. Punkt stały -  to ogólna metoda rozwiązywanie równań $f(x)=x$. Algorytm działa tak,że dostaje punkt startowy $x_0$ a następnie aplikuje do niego funkcje i nadpisuje wynikiem: $x_{n+1}=f(x_n)$. Rozwiązać równanie kwadratowe z poprzedniego zadania metodą punktu stałego.
* $f(x) = ax^2+bx+c$
* $f'(x) = 2ax +b$
* $g(x) = x - \frac{f(x)}{f'(x)} = x - \frac{ax^2+bx+c}{2ax+b}$
* $x_{n+1} = g(x_n)$

 W tym celu
   1. Pobrać punkt startowy od użytkownika, $x_0$.
   1. W pętli wykonać 20 iteracji funkcji $x_{n+1} = g(x_n)$.
   1. Wypisać wynik.




## Zadania bonusowe

### Rekurencja

Funkcja może wywołać sam siebie.

8. Napisać rekurencyjną funkcję silnia: `silnia(0)=1`, `silnia(n)=silnia(n-1)*n`


### wskaźnik do funkcji

Funkcje jako zmienne? Czasami chcemy mieć możliwość przypisania fragmentu kodu do zmiennej i przekazania np do funkcji.
Rozwiązanie to wskaźnik do funkcji.

```c++
void fun(int); //Funkcja
void (*fun_ptr)(int) = &fun; //wskaźnik na funkcję
```
Wyobraźmy sobie jak łatwo można napisać ogólne rozwiązania zdania 7, jeżeli korzystam ze wskaźników do funkcji.

9. Zaimplementować funkcje `int* _map(int (*f)(int), int* data, int n)`, która aplikuje podaną funkcje dla każdego elementu w tablicy.
9. Zaimplementować funkcje `int _reduce(int (*f)(int,int), int* data, int n)`, która wykona $f(f(f(x[0],x[1]),x[2])...$.
9. Korzystając z funkcji `_map` i `_reduce` policzyć sumę kwadratów wartości w tablicy liczb całkowitych.

### Lambda

Bonus c++ 11

```cpp
#include <functional>

function<int (float)> f = [](float a){
    if(a>0)
        return 1;
    else
        return -1;
};
```
