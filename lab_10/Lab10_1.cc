#include <iostream>

struct Car
{
    int displacement;
    int seats;
};

int main()
{
    Car *audi = new Car;
    audi->displacement = 150000;
    audi->seats = 7;

    std::cout << audi->displacement << " " << audi->seats << std::endl;

    delete audi;

    return 0;
}