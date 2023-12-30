#include<iostream>

int main()
{
    int* p;
    for(int i=0; i<3;i++)
    {
        p = &i;
    }
    std::cout << *p; // Można się do niej odnieść poza pętlą!

    return 0;
}