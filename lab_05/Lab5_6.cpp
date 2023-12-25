#include <iostream>
#include <string>

int main()
{
    int days = 0;

    std::cout << "Podaj liczbę dni: " << std::endl;
    std::cin >> days;

    std::string format;
    std::cout << "Wybierz format: godziny/minuty/sekundy\n";
    std::cin >> format;
    if (format == "godziny")
    {
        std::cout << days*24 << " godzin" << std::endl;
    }
    else if (format == "minuty")
    {
        std::cout << days*24*60 << " minut" << std::endl;
    }
    else if (format == "sekundy")
    {
        std::cout << days*24*60*60 << " sekund" << std::endl;
    }    

}
