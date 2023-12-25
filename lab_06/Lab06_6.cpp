#include <iostream>
using namespace std;

struct Complex
{
    double re;
    double im;
};

int main()
{
    Complex z;
    z.re = 2;
    z.im = 3;

    cout << "real: " << z.re << endl;
    cout << "imaginar: " << z.im << endl;

    return 0;
}