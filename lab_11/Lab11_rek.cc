#include <iostream>

int factorial(int n);

int main()
{
    int n = 5;
    std::cout << factorial(n) << std::endl;
    
    return 0;
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return n * factorial(n-1);
}