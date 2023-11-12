# Zmienne

### 1. Git - gałęzie

Jednym z najsilniejszych mechanizmów gita jest mechnizm gałęzi. Mechanizm ten umożliwia na tworzenie wersji alternatywnych naszego kodu.

>Wyobraźmy sobie, że piszemy aplikację na smartfona. Zasadnicze funkcjonalności tej aplikacji zostały zaimplementowane, lecz pojawiła się konieczność dodania funkcjonalności zapewnienia w aplikacji wielu kont użytkowników wraz z logowaniem (wielodostęp). Jeżeli zaczniemy pracę nad taką funkcjonalnością tak głęboko ingerującą w aplikację - zapewne aktualnie dewelopowana wersja aplikacji przestanie działać - na dłuższy czas. Mechanizm gałęzi rozwiązuje ten problem - możemy jednocześnie rozwijać funkcjonalność logowania a nasi współpracownicy - mogą pracować nad innymi elementami aplikacji, nie zmagając się ze zmianami wprowadzanymi przez nas.

Stworzenie gałęzi powoduje utworzenie alternatywnej wersji aktualnego repozytorium. Gałąź główna nazywa się najczęściej `master` (choć czasem - `main`). Checkout gałęzi oznacza, że pliki danej gałęzi zastąpią w naszym workspace pliki, które dotychczas się tam znajdowały - oczywiście usunięte pliki nie zostaną utracone. To ostatnie zdanie jest krytycznie istotne do zrozumienia tego, co dzieje się w naszym repo. Checkout gałęzi powoduje zmianę zawartości `workspace`!.

Polecenie `git branch` wyświetla dostępne lokalnie gałęzie. Symbolem `*` oznaczona jest aktualnie checkoutowana gałąź. Polecenie `git branch -a` wyświetla wszytskie gałęzie - zarówno lokalne jak i dostępne w źródle, z którego klonowaliśmy repozytorium (`origin`).

W celu utworzenia nowej gałęzi należy wykonać polecenie `git branch <nazwa_galezi>` lub w celu stworzenia i przełączenia się na nową gałąź `git checkout -b <nazwa_galezi>`.

>Na potrzeby naszego laboratorium wprowadzamy zasadę, że gałęzie studentów trzymane na gitLabie muszą mieć nazwę wg klucza `<NazwiskoImie>`. (Z dużych liter, bez polskich znaków! przykład: GregaMichal). Gałęzie nie spełniające tego wymagania będą regularnie usuwane.

W celu przełączenia się do danej gałęzi należy wykonać polecenie `git checkout <nazwa_galezi>`.

>Gałęzie są publiczne. Przyjmijmy dobrą zasadę, że nie wysyłamy danych do orgina w cudzej gałęzi. Pamiętajmy, że log gita pamięta każdą operację!

**Zadania**
1. Wylistuj dostępne w repozytorium zdalnym gałęzie
1. Przełącz się na gałąź dostępną w repozytorium zdalnym (o ile jest)
1. Przełącz się na gałąź `master` (!!)
1. Zrób swój własy branch 
1. W swoim branchu zrób nowy plik, commituj go
1. Przełącz sie na branch master - czy jest tam Twój plik?
1. Przełącz sie na swój własny branch - czy jest tam Twój plik?

### 2. Git - praca z repozytorium zdalnym

Funkcjonalność git jest przydatna w pracy lokalnej - umożliwia przechowywanie wersji plików a także logów zmian. Ale zasadniczą funkcjonalnością git jest praca z repozytorium zdalnym. 

Choć, jak napisano w poprzedniej instrukcji git jest repozytorium rozproszonym w którym żadne z repozytoriów nie jest w żaden sposób uprzywilejowane - jednak zazwyczaj używa się go w architekturze gwiazdy, z jednym centralnym repozytorium. 

![alt text](./img/git_star.png "Git Star") 

Taka architektura umożliwia wielu osobom współpracę nad jednym kodem. 

> Zasadniczo git umozliwia prace nad dowolnymi dokumentami tekstowymi. Nie tylko kodem programów, ale także na przykład dokumentami pisanymi w językach składu teksty (jak na przykład LaTex, w którym pisze się np publikacje naukowe) czy prostszych językach znaczników (jak niniejszy Markdown). Dzięki temu Państwo macie także możliwość poprawienia instrukcji i commitowania zmian (z pewnymi ograniczeniami organizacyjnymi)

Przebieg (wokflow) pracy ze zdalnym repozytorium jest następujący:
1. Pozyskanie repozytorium - `git clone <url>` jeśli repozytorium jeszcze nie mamy lub `git pull` jeśli repozytorium mamy - wtedy je aktualizujemy.

2. Wprowadzenie zmian

3. Wykonanie `git commit -am`

4. Wykonanie `git push`, co spowoduje wysłanie danych z aktualnego brancha do zdalnego repozytorium. Aby wysłać do zdalenego repozytorium nową gałąź należy za pierwszym razem wykonać `git push -u origin <nazwa_brancha>`

> Nie macie państwo możliwości robienia push do gałęzi `master`. Ma to na celu ochronę gałęzi głównej. Natomiast możecie państwo robić push do własnych gałęzi

**Zadanie**
1. Wyślij swój branch do `origin`
2. Na zadanie domowe - podłącz się do gitLaba i ściągnij gałąź `master` i swoją własną gałąź

>Od tej pory oczekujemy, że cały napisany w czasie zajęć kod będzie przechowywany w Państwa gałęziach na bieżąco. Oznacza to konieczność wielokrotnego commitowania i pushowania w czasie zajęć. Proszę się do tego przyzwyczaić - to dobry nawyk. Log gita może stanowić element oceny państwa pracy (zawodowej i na uczelni!)


## C++

### 1. Działania arytmetyczne w C++

Proszę napisać program deklarujący i wypisujący zmienne.
* Na zmiennych powinny zostać wykonane różne operacje arytmetyczne takie jak, `%`, `+`, `*`, `++`, `+=`.
* Proszę się nie ograniczyć tylko do tych operacji
* Proszę spróbować podzielić przez zero. 

Program powinien pokazać wpływ typu zmiennej oraz kolejności operacji na otrzymaną wartość. 
* Dodatkowo proszę dać przykład przepełnienia zmiennej, można do tego użyć wartości `INT_MAX` z biblioteki `climits`. 

Na początek można posłużyć się kodem:
```cpp
#include <iostream>

int main(){
  //variable initialization
  int x = 1;
  //operation visualization
  std::cout << x << std::endl;
  //example of an operator +
  x = x + 5;
  //operation visualization
  std::cout << x << std::endl;
}
```
Do kompilacji proszę użyć komendy `g++ -Wall program.cpp`, pozwoli to na otrzymanie informacji o błędach i ostrzeżeniach.

### 2. Kolejność wykonywania instrukcji

Skompiluj i uruchom poniższy program, a następnie:
* Zamień miejscami 5 i 6 linię poniższego kodu (puste linie wliczając), jeszcze raz skompiluj i uruchom program.
* Czy wartość zmiennej c została przeliczona dla ostatniej wartości b, czy też pozostała tam ostatnio
wpisana (obliczona) wartość wyrażenia?
* Zaobserwuj, kiedy zmienia się wartość zmiennych a kiedy są nadpisywane?
* Zmień 6 linię kodu, tak aby do b przypisywany był iloczyn a z sumą b i c. 

```cpp
#include <iostream>
int main() {
  int a = 1;
  int b = 2;
  int c = a+b;
  b = 4;
  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;
}
```

### 3. Pre/post inkrementacja/dekrementacja

Skompiluj i uruchom poniższy program a następnie:
* Odkomentuj 5 i zakomentuj 6 linię kodu, jeszcze raz skompiluj i uruchom program. Czy nastąpiły jakieś zmiany?
* Zastąp preinkrementację postinkrementacją. Czy nastąpiły jakieś zmiany?
```cpp
#include <iostream>
int main() {
  int a = 1;
  int b = 1;
  // a = a+1;
  a+= 1;
  ++b;
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;
}
```
