#include <iostream>
int main()
{
    int a = 1;
    int b = 2;
    int c = a + b;
    b = a*(b+c);
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
}