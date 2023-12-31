#include <iostream>

int main()
{
    int size = 6;
    int tab[] = {1,2,3,4,5,6};

    int* start = tab;
    int* end = tab + size - 1;

    while (start < end) {
        // Zamiana elementów przy użyciu wskaźników
        int temp = *start;
        *start = *end;
        *end = temp;

        // Przesunięcie wskaźników
        start++;
        end--;
    }

    for (int i = 0; i < sizeof(tab)/sizeof(tab[0]); i++)
    {
        std::cout << tab[i] << std::endl;
    }

}