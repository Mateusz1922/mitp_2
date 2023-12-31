#include <iostream>

int main()
{
    const char napis[] = "Mam psa";

    for(int i = 0; napis[i] != '\0'; i++)
    {
        std::cout << *(napis+i);
    }
    std::cout << std::endl;

    int flaga = 0;
    for(int i = 0; napis[i] != '\0'; i++)
    {
        if (flaga == 1)
        {
            std::cout << *(napis+i);
        }
        if (*(napis+i) == ' ')
        {
            flaga = 1;
        }

    }
    std::cout << std::endl;
    

    return 0;
}