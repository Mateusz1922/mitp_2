#include <iostream>

int main()
{
    int size;
    std::cout << "Podaj rozmiar tablicy: ";
    std::cin >> size;
    std::cout << std::endl;

    int* tab = new int[size];

    for (int i = 0; i < size; i++)
    {
        *(tab+i) = i;
    }
        for (int i = 0; i < size; i++)
    {
        std::cout << *(tab+i) << std::endl;
    }
    delete [] tab;
}