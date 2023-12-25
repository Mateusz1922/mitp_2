# **Lab 06** 

## 1. Pętle
**Zadanie 1**. Napisz program wyświetlający na ekranie liczby od 1 do 100. Napisz ten program używając pętli `for`. Rozwiązanie zapisz jako plik `Lab06_1_solved.cc` i umieść w swojej gałęzi git.

**Zadanie 2**. Napisz program wyświetlający na ekranie liczby od 100 do 1 co 3 (100,97,94,91 itd.). Napisz ten program używając pętli `while`. Rozwiązanie zapisz jako plik `Lab06_2_solved.cc` i umieść w swojej gałęzi git.

**Zadanie 3**. Napisz program wyświetlający na ekranie jedynie parzyste liczby w zakresie od 1 do 100. Rozwiązanie zapisz jako plik `Lab06_3_solved.cc` i umieść w swojej gałęzi git.

**Zadanie 4**. Zapoznaj się z kodem `Lab06_4v1.cc`, który zawiera trzy sposoby tworzenie pętli nieskończonych w języku C. Używając wybranej pętli nieskończonej użyj instrukcji `break` i `continue`, aby wyświetlić na ekran wszystkie liczby podzielne przez 12 z zakresu <0, 144>. Rozwiązanie zapisz jako plik `Lab06_4v2_solved.cc` i umieść w swojej gałęzi git. 

**Zadanie 5**. Zaimplementuj pseudokod zawarty w pliku `Lab06_pseudo.txt` w języku C++. Rozwiązanie zapisz jako plik `Lab06_5_solved.cc` i umieść w swojej gałęzi git.  


## 2. Struktury
Struktury to złożone typy danych, które mogą przechowywać wiele wartości różnego
typu w jednej zmiennej. Najczęściej staramy się w jednej strukturze opisać jeden obiekt. Przeanalizuj poniższy kod:

```cpp
#include <iostream>
using namespace std;

struct Employee
{
    string name;
    int company_id;
    float salary;
};

int main()
{
    Employee e1;
    e1.name = "Jane Doe";
    e1.company_id = 254;
    e1.salary = 5000.00;

    cout << "name: " << e1.name << endl;
    cout << "company id: " << e1.company_id << endl;
    cout << "salary: " << e1.salary << endl;

    return 0;
}
```

**Zadanie 6**. Napisz program który dodaje dwie liczby zespolone podane przez użytkownika. Liczby zespolone reprezentuj jako struktury o nazwie `Complex` złożone z dwóch elementów `re` i `im` typu `double`. Rozwiazanie zapisz do pliku `Lab06_6_solved.cc`.

**Zadanie 7**. Napisz program, w którym utworzysz strukturę o nazwie `Point` zawierającą współrzędne `x` i `y` punktu. Następnie utwórz strukturę `Section` (odcinek) składającą się z dwóch punktów (wykorzystaj do tego strukturę `Point`). 

Użyj czterech struktur `Section` do opisania prostokąta, na podstawie danych wprowadzonych przez użytkownika - załóż, że użytkownik wprowadzi tylko współrzędne x, y górnego lewego rogu i prawego dolnego rogu - cztery liczby.

Rozwiazanie zapisz do pliku `Lab06_7_solved.cc`.
