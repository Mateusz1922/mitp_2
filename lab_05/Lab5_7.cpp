#include <iostream>
#include <string>

int main()
{
    std::string password;

    std::cout << "Podaj hasło: " << std::endl;
    std::cin >> password;

    int x = 5;
    int y = 6;

    if (password == "haslo")
    {
        std::string arithmetic;
        std::cout << "Wybierz działanie: dodaj/pomnoz/podziel\n";
        std::cin >> arithmetic;
        if (arithmetic == "dodaj")
        {
            std::cout << x+y << std::endl;
        }
        else if (arithmetic == "pomnoz")
        {
            std::cout << x*y << std::endl;
        }
        else if (arithmetic == "podziel")
        {
            if (y != 0){
            std::cout << x/y << std::endl;
            }
            else
            {
                std::cout << "Dzielenie przez 0!\n";
            }
        }
    }
}