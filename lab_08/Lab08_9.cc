#include<iostream>

int main()
{
    int a = 5;
    int* b = &a;
    std::cout << "Przed modyfikacją: " << *b;
    *b = 7;
    std::cout << ", Po modyfikacji: " << *b;

    return 0;
}