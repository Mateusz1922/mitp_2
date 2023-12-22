#include <iostream>
int main(){
    int a = 1;
    int b = 1;
    a = a++;
    // a += 1;
    b++;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
}