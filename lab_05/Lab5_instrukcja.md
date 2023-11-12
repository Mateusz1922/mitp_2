## 1. Git - konflikty

Na ostatnim laboratorium poznaliśmy pracę na gałęziach. Przy komendzie `merge` dowiedzieliście się, że mogą pojawić się konflikty. Co to oznacza i jak można sobie z nimi poradzić?


Do konfliktu dochodzi w momencie gdy:
- Chcemy zrobić merge dwóch gałęzi 
- Chcemy zrobić push lub pull, a wersja lokalna i zdalna są skonfliktowane

Konflikt to sytuacja, w której istnieją dwie różne wersje tekstu. Konieczność ręcznego rozwiązania konfliktu ma miejsce wtedy, gdy mechanizmy git nie są w stanie automatycznie połączyć dwóch różnych wersji.

W poniższym przykładzie git połączy obie wersje - ponieważ jest w stanie dokonać analizy tekstu i potrafi wykryć, że w tekście drugim dodano dodatkową linię. Wynikiem automatycznego scalenia będzie drugi tekst

Tekst 1:
```cpp
main(){
  cout<<"Dziś jest poniedziałek"<<endl;
}

```
Tekst 2:
```cpp
main(){
  cout<<"Jest rok 2022"<<endl;
  cout<<"Dziś jest poniedziałek"<<endl;
}
```

W poniższym przykładzie git nie będzie w stanie automatycznie rozwikłać konfliktu, ponieważ nie wie, która wersja jest prawidłowa:

Tekst 3:
```cpp 
main(){
  cout<<"Dziś jest poniedziałek"<<endl;
}
```
Tekst 4:
```cpp
main(){
  cout<<"Dziś jest wtorek"<<endl;
}
```

Rezultatem tego konfliktu będzie utworzenie pliku o następującej zawartości:

```cpp 
main(){
<<<<<<< HEAD    
  cout<<"Dziś jest poniedziałek"<<endl;
=======
  cout<<"Dziś jest wtorek"<<endl;
>>>>>>> nazwaGalezi
}
```
To co jest między znacznikami `<<<<<<< HEAD` a `=======` to stan z bieżącej gałęzi zaś poniżej, pomiędzy `=======` a `>>>>>>> nazwaGalezi` to stan z gałęzi, z którą się łączymy. W tej sytuacji musimy plik wyedytować, wybrać właściwą wersję i usunąć znaczniki.

>Istnieją narzędzia wspomagające dobrym interfejsem usuwanie konfliktów jak na przykład meld, p4merge, GitKraken czy dowolne współczesne IDE (Pycharm/CLion, Visual Studio Code, etc...). Wywołanie narzędzia poleceniem `git mergetool` - oczywiście po poprzednim zainstalowaniu narzędzia i skonfigurowaniem gita poleceniem `git config --global merge.tool`

**Przykład** do przećwiczenia w trakcie zajęć:
1. Dobierz się w grupy po 2 osoby (student_1, student_2), każda osoba ma swoją gałąź, będziecie wzajemnie się łączyć i rozwiązywać konflikty w obrębie tych dwóch gałęzi.
2. Przykład bez konfliktu (uwaga, kolejność jest ważna!!!):
  - Student_1 w swojej gałęzi utworzy plik `Lab5_1.cc` z kodem opisanym w `Tekst 1`.
  - Student_1 zacommituje zmiany i wypchnie je do zdalnego repozytorium
  - Student_2 w swojej gałęzi utworzy plik `Lab5_1.cc` z kodem opisanym w `Tekst 2`.
  - Student_2 zacommituje zmiany i wypchnie je do zdalnego repozytorium
  - Student_1 zmerguje gałąź student_2 do swojej gałęzi 
    > w tym momencie git automatycznie połączy oba teksty, proszę sprawdzić czy tekst jest poprawny
3. Proszę przećwiczyć ten wariant w drugą stronę (student_2 łączy się z gałęzią student_1)
4. Przykład z konfliktem (uwaga, kolejność jest ważna!!!):
  - Student_1 w swojej gałęzi utworzy plik `Lab5_1.cc` z kodem opisanym w `Tekst 3`.
  - Student_1 zacommituje zmiany i wypchnie je do zdalnego repozytorium
  - Student_2 w swojej gałęzi utworzy plik `Lab5_1.cc` z kodem opisanym w `Tekst 4`.
  - Student_2 zacommituje zmiany i wypchnie je do zdalnego repozytorium
  - Student_1 zmerguje gałąź student_2 do swojej gałęzi 
    > w tym momencie git nie będzie w stanie połączyć obu tekstów, proszę sprawdzić czy tekst jest poprawny
  - Student_1 rozwiąże konflikt i zacommituje zmiany
  - Student_1 wypchnie zmiany do zdalnego repozytorium
5. Proszę przećwiczyć ten wariant w drugą stronę (student_2 łączy się z gałęzią student_1)

**Note:**
Ważna jest chronologia commitów, pamiętajcie że `git` działa zawsze lokalnie. Proponowana sekwencja instrukcji:

1. student_1: (tworzy plik `Lab5_1.cc` i umieszcza go w remote)
  - vim lab_05/Lab5_1.cc
  - git add .
  - git commit -am "wersja 1"
  - git push
2. student 2: (tworzy swoją wersję `Lab5_1.cc` i łączy z gałęzią student_1)
  - vim lab_05/Lab5_1.cc
  - git add .
  - git commit -am "wersja 2"
  - **wersja z fetch** - łączenie z gałęzią bezpośrednio na serwerze, lokalne repozytorium musi się dowiedzieć o nowych plikach na serwerze (dlatego fetch)
    - git fetch origin student_1
    - git merge origin/student_1
  - **wersja lokalna** - łączenie z gałęzią lokalną - trzeba uaktualnić lokalną gałąź student_1
    - git checkout student_1
    - git pull
    - git checkout student_2
    - git merge student_1

## C++
### 2. Wyrażenia warunkowe

1. Przeanalizuj kod `Lab5_2.cc`. Zmodyfikuj go w taki sposób, by na ekranie wyświetliło się `Suma 3: 3`. Rozwiązanie zapisz jako plik `Lab5_2_solved.cc` i umieść w swojej gałęzi git.
2. Przeanalizuj kod `Lab5_3.cc`. W kodzie znajdują się dwa błędy. Jeden to błąd semantyczny:, drugi to błąd logiczny konstrukcji programu. Znajdź błędy, popraw program. Rozwiązanie zapisz jako plik `Lab5_3_solved.cc` i umieść w swojej gałęzi git.
3. Przeanalizuj kod `Lab5_4.cc`. Kod zawiera konstrukcję `if...else`. Zapisz ten sam warunek przy użyciu operatora trójargumentowego. Rozwiązanie zapisz jako plik `Lab5_4_solved.cc` i umieść w swojej gałęzi git.
4. Przeanalizuj kod `Lab5_5.cc`. Kod zawiera błąd. Na czym ten błąd polega? Popraw kod i rozwiązanie zapisz jako plik `Lab5_5_solved.cc` i umieść w swojej gałęzi git. 


### 3. Zadania do przećwiczenia
1. Napisz program, który prosi użytkownika o podanie liczby dni i formatu odpowiedzi (godziny/minuty/sekundy) i przelicza liczbę dni na wybrany format.
2. Napisz program, który prosi użytkownika o hasło. Jeśli hasło jest prawidłowe, wykonaj na dowolnych dwóch liczbach wybraną przez użytkownika operację (dodaj liczby/pomnóż/podziel)


Powodzenia :)

