# **Lab 07** 

## 1. Struktury
Struktury to złożone typy danych, które mogą przechowywać wiele wartości różnego typu w jednej zmiennej. Najczęściej staramy się w jednej strukturze opisać jeden obiekt. Przeanalizuj poniższy kod:

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

**Zadanie 1**. Napisz program który dodaje dwie liczby zespolone podane przez użytkownika. Liczby zespolone reprezentuj jako struktury o nazwie `Complex` złożone z dwóch elementów `re` i `im` typu `double`. Rozwiazanie zapisz do pliku `Lab07_1_solved.cc`.

**Zadanie 2**. Napisz program, w którym utworzysz strukturę o nazwie `Point` zawierającą współrzędne `x` i `y` punktu. Następnie utwórz strukturę `Section` (odcinek) składającą się z dwóch punktów (wykorzystaj do tego strukturę `Point`). 

Użyj czterech struktur `Section` do opisania prostokąta, na podstawie danych wprowadzonych przez użytkownika - załóż, że użytkownik wprowadzi tylko współrzędne x, y górnego lewego rogu i prawego dolnego rogu - cztery liczby.

Rozwiazanie zapisz do pliku `Lab07_2_solved.cc`.

## 2. Enum

Typ wyliczeniowy enum służy do tworzenia nowych typów zmiennych, w których przechowywane są z góry określone wartości. Dziedziną typu wyliczeniowego enum jest zbiór symbolicznych stałych całkowitych – elementów wyliczenia.
```cpp
enum elements { 
    ELEMENT_1, 
    ELEMENT_2, 
    ELEMENT_3 
};
```

**Zadanie 3**. Znajdź błąd w programie Lab07_3.cc, popraw i rozwiązanie zapisz w pliku `Lab07_3_solved.cc`

**Zadanie 4**. Za pomocą struktur stwórz program który prosi użytkownika o podanie dwóch czasów (w godzinach i minutach) i oblicza różnicę pomiędzy nimi. Rozwiązanie zapisz w pliku `Lab07_4_solved.cc`
