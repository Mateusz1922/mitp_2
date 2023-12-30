//============================================================================
// Name        : Lab6.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on occurrence counting
//============================================================================

#include <iostream>
using namespace std;

int main()
{

    int digits[] = {2, 4, 5, 3, 2, 5, 6, 3, 5, 7, 9, 2, 1, 2, 3, 4, 5, 6, 4, 3, 2, 6, 3, 4, 4, 1, 3, 7, 9, 5, 9, 2, 3, 1, 2, 3, 4, 5, 6, 2, 1, 2, 3, 4, 5, 3, 2, 7, 7, 7};

    int dwojki = 0;
    int trojki = 0;
    int czworki = 0;
    int piatki = 0;
    int szostki = 0;
    int siodemki = 0;
    int osemki = 0;
    int dziewiatki = 0;
    int zera = 0;
    int jedynki = 0;
    for (auto &elem : digits)
    {
        switch (elem)
        {
        case 0:
        {
            zera++;
            break;
        }
        case 1:
        {
            jedynki++;
            break;
        }
        case 2:
        {
            dwojki++;
            break;
        }
        case 3:
        {
            trojki++;
            break;
        }
        case 4:
        {
            czworki++;
            break;
        }
        case 5:
        {
            piatki++;
            break;
        }
        case 6:
        {
            szostki++;
            break;
        }
        case 7:
        {
            siodemki++;
            break;
        }
        case 8:
        {
            osemki++;
            break;
        }
        case 9:
        {
            dziewiatki++;
            break;
        }
        }
    }
std::cout << "1: " << jedynki << ", 2: " << dwojki << ", 3: " << trojki << ", 4: " << czworki << ", 5: " << piatki << ", 6: " << szostki
          << ", 7: " << siodemki << ", 8: " << osemki << ", 9: " << dziewiatki;

    return 0;
}
