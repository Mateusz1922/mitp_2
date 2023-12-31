#include <iostream>

struct Person
{
    int age;
    double weight;
};

int main()
{
    Person michael;
    Person* ptr = &michael;
    ptr->age = 19;
    ptr->weight = 76;

    std::cout << ptr->age << std::endl;
    std::cout << ptr->weight << std::endl;

    int tab[] = {2,45,1,2,5,2};
    for (int i = 0; i < sizeof(tab)/sizeof(tab[0]); i++)
    {
        std::cout << *(tab+i) << std::endl;
    }
    double tab1[] = {2.0,45.4,1.1,2.7,5.3,2.78};
    for (int i = 0; i < sizeof(tab1)/sizeof(tab1[0]); i++)
    {
        std::cout << *(tab1+i) << std::endl;
    }



}