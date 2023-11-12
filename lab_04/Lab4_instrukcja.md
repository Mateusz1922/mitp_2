## 1. Git - praca z własną gałęzią i łączenie gałęzi

Na ostatnim laboratorium tworzyliśmy własne gałezie - dla przypomnienia - jest to mechanizm pozwalający na tworzenie alternatywnych wersji kodu w celu pracy nad poszczególnymi funkcjonalnościmi. Umownie - działający kod projektu trzymany jest w gałęzi `master`/`main`. Gdy we własnej gałęzi dopiszemy funkcjonalność - pojawia się konieczność połączenia gałęzi. Tą operację nazywa się merge.

Musimy pamiętać, że jeśli uwtorzyliśmy własną gałąź i pracowaliśmy w niej nad funkcjonalnościami projektu - w tym czasie któryś z innych współpracowników mógł zmienić gałąź `master`. Tak więc operacja merge to coś więcej niż proste zastąpienie gałęzi `master` naszym własnym branchem. Musimy rozwiązać konflikty - czyli sytuacje w których dane miejsce w kodzie zostało zmienione na dwa różne sposoby.

**Typowy workflow** dnia pracy programisty jest następujący:
- `git pull` - ściągamy to co się zmieniło w nocy
- `git checkout -b nazwaGalezi` - robimy nową gałąź i na niej pracujemy
- `git add ...` - dodajemy nowe i istotne pliki do indeksu
- `git commit -am "Nowa funkcjonalność"` - commitujemy zmiany
- `git push -u origin myBranch` - wysyłamy zmiany na serwer (-u powoduje, że gałąź master staje się rodzicem, idziemy do domu
- `git pull` - następnego dnia ściągamy zmiany 
- `git checkout nazwaGalezi` - przełączamy się na naszą gałąź i pracujemy
- `git checkout master` - przełączamy się na gałąź `master`
- `git merge nazwaGalezi` - łączymy gałęzie `master` i `nazwaGalezi`. Tu mogą się pojawić konflikty, które musimy rozwikłać!
- `git commit -am "dodanie dowej funkcjonalnosci"` - commitujemy zmiany
- `git push` - wysyłamy na serwer zdalny

**Workflow na laboratorium** jest nieco inny. Ponieważ nie pracujemy nad kodem, a gałęzie służą do trzymania indywidualnego kodu - nie będziemy dołączać do `master` naszej gałęzi - lecz będziemy do naszej gałęzi dołączać to, co zmieniło się w gałęzi `master`.:

JEDNORAZOWO (to już powinni Państwo mieć zrobione i wtedy proszę tego nie robić!) należy wykonać:
- `git checkout master` - przejście do gałęzi głównej
- `git pull` - ściągnięcie z głównej do lokalnej ewentualnych zmian
- `git checkout -b myBranch` - utworzenie własnej gałęzi tak, żeby rodzicem była gałąź master (to jest ważne!)
- `git push -u origin myBranch` - utworzenie gałęzi na zdalnym repozytorium

Po pracy w swojej gałęzi - np wyedytowaniu przykładu lub stworzeniu nowego pliku z kodem:
- `git add ...` - dodaje pliki z kodem ew. inne tekstowe pliki potrzebne do działania kodu
- `git commit -am "zmiany"` - zatwierdza te zmiany
- `git push` - przesyła je do zdalnego repozytorium

Po przyjściu na kolejne laboratorium (w master pojawiły się zmiany - dopisaliśmy nowe ćwiczenie):
- `git checkout myBranch` - przełącza się na swoją gałąź (zakładamy, że repozytorium jest już utworzone)
- `git pull` - ściąga najnowszą wersję (np. by móc pracować w domu na innym komputerze i coś sobie dodać)
- `git merge master` - w tym miejscu gałąź **master** zostanie dołączona do **myBranch**. Tylko nowe pliki, albo uaktualnione pliki zostaną ściągnięte z master i połączone z plikami w gałęzi myBranch.
- `git commit -am "...."` - zatwierdzamy zmiany zrobione w czasie laboratorium w gałęzi **myBranch** (!!!) a nie w master
- `git push` - myBranch wysyłamy do zdalnego repozytorium

**Zadanie**
> Od tej pory proszę wszystkie wykonane ćwiczenia trzymać w swojej gałęzi na gitLab. 

## C++
### 2. Wyrażenia logiczne

Proszę napisać program wykorzystujący operatory logiczne `==`, `!=`, `>`, `<`, `>=`, `<=`. 
Na początek można posłużyć się kodem:
```cpp
#include <iostream>

int main() {
    int a = 3;
    int b = 0;
    int c = (a < b);
    std::cout << c << std::endl;
    std::cout << (a > b) << std::endl;
    std::cout << (4 + 2 <= 2 * a) << std::endl;
    bool b1 = true; // or false
    bool b2 = (4 + 2) <= (2 * a);
    bool b3 = 4 + 2 < 2 * a;
}
```

* Proszę połączyć kilka operatorów logicznych z wykorzystaniem `&&`, `||` oraz negacji `!`. 
* Proszę sprawdzić jaką wartość liczbową ma prawda i fałsz. 
* Proszę wykorzystać wartości specjalne `false`, `true` (dla typu `bool` to są wartości, takie jak 0, 1, 2, dla typu `int`).
* Proszę sprawdzić jak działa kolejność działań i inkrementacja wraz z wyrażeniami logicznymi, czyli wyrażenia typu:
```cpp
int x = 1;
bool b = ++x==2;
bool c = x>0 || ++x>0;
std::cout << "x " << x << ", b " << b << ", c " << c << std::endl;
```

Mamy nadzieję, że utwierdzi to Państwa w przekonaniu, że nie warto tak pisać kodu.

* Proszę sprawdzić, czy wartość zmiennej `x` znajduje się w przedziale od 3 do 7. Proszę wykorzystać zaprzeczenia całego wyrażenia logicznego.

### 3. Operatory bitowe

Proszę napisać program wykorzystujący opertory bitowe `|`, `&`, `^`, `<<`, `>>`, `~`.
* Proszę sprawdzić jaka jest relacja przesunięcia bitowego i podnoszenia 2 do potęgi. 
* Proszę zmienić wartość pojedynczego bitu. 
* Proszę sprawdzić jaki błąd zostanie wygenerowany jeżeli zamiast operatora logicznego `&&` użyjemy bitowego `&`.

Poniższy kod sprawdzi czy na 5 pozycji bitowej jest 1:
```cpp
int x = 0;  // dowolna liczba
bool b = x & (1<<5);
cout << b << endl;
```

Poniższy kod ustawi 7 bit na 1, a pozostałe nie zmieni:
```cpp
int x = 0;  // dowolna liczba
x |= 1<<7;
```

Zadanie: napisz kod, który wypisze wartości najmłodszych 8 bitów liczby `int x = 85;`. Nie używaj pętli (nawet jeżeli potrafisz). Zapisz kod w pliku `bit.cpp`.


### 4. Operatory rzutowania

Proszę wykorzystać operatory rzutowania. Proszę sprawdzić działanie takiego kodu:
```cpp
int x = 10;
short a = x;
short b = (short)x;
short c = short(x);
short d = static_cast<short>(x);
```

* Jak zmieni się wynik jeżeli pierwszą linię zastąpimy wpisem `int x = 1<<20`? 
* Jeżeli wyjściowa zmienna `x` jest typu `short` to, czy przy rzutowaniu jej na `int` możemy stracić część informacji? 
* Proszę sprawdzić informację otrzymaną za pomocą operatora `sizeof()`. 
* Jak działa rzutowanie dla zmiany z `float` na `int`?

### 5. Tekst

Proszę napisać program obrazujący, jak kody ASCII reprezentowane są w C++. 
* Proszę dodać liczbę do zmiennej typu `char`. 
* Proszę zainicjować zmienną typu `char` z wykorzystaniem liczby. 
* Proszę sprawdzić działanie `std::cout << e << "\n"` oraz `std::cout << (int)e << "\n"` gdzie `e` zdefiniowane jest jako `char e = '2'`.

### 6. Liczby zmiennoprzecinkowe 

Proszę sprawdzić, dla jakich liczb `a` i `b` otrzymamy błędne wyniki dla kodu:
```cpp
float a = 1;
float b = 10000;
std::cout << (a + b) - b << std::endl;
std::cout << a + (b - b) << std::endl;
```

Proszę z dużą precyzją wypisać wynik działania operacji 1/5 z wykorzystaniem biblioteki `iomanip` oraz kodu:
```cpp
std::cout << std::setprecision(10);
std::cout << a << "\n";
```
Czy ten problem wystąpi dla zmiennej typu `double`?


> Na rozwiązane ćwiczenie laboratoryjne składają się pliki z kodem z rozwiązaniami umieszczonych we własnej gałęzi na gitLab.


Powodzenia!!!

