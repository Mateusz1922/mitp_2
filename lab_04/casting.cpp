#include <iostream>

class Base
{
public:
    Base() {}
    virtual ~Base() {}
};

class Derived : public Base
{
public:
    Derived() {}
    ~Derived() {}
};

class AnotherClass : public Base
{
public:
    AnotherClass() {}
    ~AnotherClass() {}
};


int main()
{
    int x = 1 << 20;
    short a = x;
    short b = (short)x;
    short c = short(x);
    short d = static_cast<short>(x);

    printf("x = %d\n", x);
    // Tracimy informację po zrzutowaniu na short (liczba użytych bitów)
    printf("a = %d, sizeof(a) = %d\n", a, sizeof(a));
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    printf("d = %d\n", d);
    std::cout << sizeof(short) << "\n";

    double value = 5.25;
    double aq = (int)value+5.3;
    
    // double s = static_cast<AnotherClass*>(&value) + 5.3;
    // double value = a;
    
    std::cout << "a = " << aq << std::endl;
    std::cout << "value = " << value << std::endl;
    // std::cout << "s = " << s << std::endl;
    
    Derived* derived = new Derived();
    
    Base* base = derived;
    
    AnotherClass* ac = dynamic_cast<AnotherClass*>(base);
    if(!ac) // conversion successful
    {
        std::cout << "Conversion not worked\n";
    }
}