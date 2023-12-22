#include <iostream>

int main() {
    int a = 3;
    int b = 0;
    int c = (a < b);
    // std::cout << c << std::endl;
    // std::cout << (a > b) << std::endl;
    // std::cout << (4 + 2 <= 2 * a) << std::endl;
    bool b1 = true; // or false
    bool b2 = (4 + 2) <= (2 * a);
    bool b3 = 4 + 2 < 2 * a;
    std::cout << (b1 && b2) << std::endl;
    std::cout << (b2 || b3) << std::endl;
    std::cout << !b1 << std::endl;

    printf("%d\n", b1);

    std::cout << "-------------\n";

    int x = 1;
    bool b4 = ++x == 2;
    bool c1 = x>0 || ++x>0;
    std::cout << "x " << x << ", b " << b << ", c1 " << c1 << std::endl;

    std::cout << !(x <= 3 || x >= 7) << std::endl;

    /* Bit operations */
    int q = 1;
    q = 2 << q;
    std::cout << "q = " << q << std::endl;

}