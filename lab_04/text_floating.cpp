#include <iostream>
#include <iomanip>

int main() 
{
    char e = '9';
    // std::cout << e << "\n";
    // std::cout << (int)e << "\n";


    // floating
    float a = 1;
    float b = 100000000; //10^8
    // std::cout << (a + b) - b << std::endl;
    // std::cout << a + (b - b) << std::endl;

    a = a/3;
    std::cout << std::setprecision(10) << a << "\n";
    // std::cout << a << "\n";

}