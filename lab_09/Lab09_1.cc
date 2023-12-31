//============================================================================
// Name        : Lab5.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on array of structures
//============================================================================

#include <iostream>
using namespace std;

struct car
{
    int sits;
    float range;
};

int main()
{

    // car tab[10];
    // tab[0].sits = 5;
    // tab[0].range = 500;
    // car au = {30, 1500};

    // tab[2] = au;

    // int size = sizeof(tab);

    // cout << au.sits << " " << size;

    car* tab_new = new car;
    tab_new->sits = 7;
    tab_new->range = 600;

    cout << tab_new->range << std::endl;

    delete tab_new;


    car tab_object[10];
    car *ptr = tab_object;

    ptr->range = 1000;
    ptr->sits = 14;
    cout << ptr->range;


    return 0;
}
