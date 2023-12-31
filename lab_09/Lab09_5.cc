#include <iostream>

int main()
{
    const int maxSize = 4;

    // Deklaracja tablicy wskaźników
    int* array[maxSize];

    // Inicjalizacja tablicy wskaźników
    for (int i = 0; i < maxSize; i++) {
        int size = i + 1;
        array[i] = new int[size];

        // Inicjalizacja elementów tablicy
        for (int j = 0; j < size; j++) 
        {
            array[i][j] = j + 1;
        }
    }

    for (int i = 0; i < maxSize; i++) {
        int size = i + 1;
        std::cout << "Array " << size << ": ";

        // Wyświetlenie elementów tablicy
        for (int j = 0; j < size; j++) {
            std::cout << array[i][j] << " ";
        }

        std::cout << std::endl;
    }

    // Modyfikacja elementów tablicy zgodnie z warunkami
    for (int i = maxSize - 1; i >= 0; i--) {
        // int size = i; // 3, 2, 1, 0
        std::cout << i << std::endl;

        // Dla tablicy o długości 3
        if (i == 2) 
        {
            array[i][2] = array[i+1][2] + array[i+1][3];
        }

        // Dla tablicy o długości 2
        if (i == 1) {
            array[i][1] = array[i+1][1] + array[i+1][2];
            // array[i][3] = array[i][2] + array[i][1];
        }

        if (!i)
        {
            array[i][0] = array[i+1][0] + array[i+1][1];
        }
    }

    for (int i = 0; i < maxSize; i++) {
        int size = i + 1;
        std::cout << "Array " << size << ": ";

        // Wyświetlenie elementów tablicy
        for (int j = 0; j < size; j++) {
            std::cout << array[i][j] << " ";
        }

        std::cout << std::endl;
    }

    // Zwolnienie pamięci
    for (int i = 0; i < maxSize; i++) {
        delete[] array[i];
    }


    // int jeden = 1;
    // int dwa = 2;
    // int trzy = 3;
    // int cztery = 4;
    // int tab4[4] = {1,2,3,4};
    // int tab3[3] = {tab4[0], tab4[1], tab4[2]+tab4[3]};
    // int tab2[2] = {tab3[0], tab3[1]+tab3[2]};
    // int tab1[1] = {tab2[0]+tab2[1]};



    // int* tab_ptrs[4];

    // **tab_ptrs = tab1;
    // **(tab_ptrs+1) = tab2;
    // **(tab_ptrs+2) = tab3;
    // **(tab_ptrs+3) = tab4;



    return 0;
}