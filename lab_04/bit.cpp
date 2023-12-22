#include <iostream>

int main() 
{
    /* 0000000001010101*/
    int x = 85;
    std::cout << "Wypisywanie od LSB\n";
    std::cout << "bit 1: " << (x >> 7 & 1) << std::endl;
    std::cout << "bit 2: " << (x >> 6 & 1) << std::endl;
    std::cout << "bit 3: " << (x >> 5 & 1) << std::endl;
    std::cout << "bit 4: " << (x >> 4 & 1) << std::endl;
    std::cout << "bit 5: " << (x >> 3 & 1) << std::endl;
    std::cout << "bit 6: " << (x >> 2 & 1) << std::endl;
    std::cout << "bit 7: " << (x >> 1 & 1) << std::endl;
    std::cout << "bit 8: " << (x >> 0 & 1) << std::endl;

}