#include <iostream>
using namespace std;

struct Hour
{
    int godzina;
    int minuta;
};

int main()
{
    Hour start;
    start.godzina = 12;
    start.minuta = 30;

    Hour stop;
    stop.godzina = 16;
    stop.minuta = 15;

    std::cout << "Roznica wynosi: " <<  stop.godzina*60+stop.minuta - (start.godzina*60+start.minuta) << " minut." << std::endl;

    return 0;
}

