#include <iostream>
using namespace std;

struct Point
{
    double x;
    double y;
};

struct Section
{
    Point p1;
    Point p2;
};

int main()
{
    Section line1;
    Section line2;
    Section line3;
    Section line4;

    cout << "Podaj wspolrzedna x, lewego górnego kranca prostokata: ";
    cin >> line1.p1.x;
    cout << std::endl;
    cout << "Podaj wspolrzedna y, lewego górnego kranca prostokata: ";
    cin >> line1.p1.y;
    cout << "Podaj wspolrzedna x, prawego dolnego kranca prostokata: ";
    cin >> line3.p2.x;
    cout << "Podaj wspolrzedna y, prawego dolnego kranca prostokata: ";
    cin >> line3.p2.y;

    line1.p2.x = line3.p2.x;
    line1.p2.y = line1.p1.y;

    // line2.p1.x = line3.p2.x;
    // line1.p2.y = line1.p1.y;

    //     line1.p2.x = line3.p2.x;
    // line1.p2.y = line1.p1.y;    line1.p2.x = line3.p2.x;
    // line1.p2.y = line1.p1.y;

    //     line1.p2.x = line3.p2.x;
    // line1.p2.y = line1.p1.y;
    return 0;
}