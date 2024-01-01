#include <iostream>

using namespace std;

void eq_plus(int* a, int b);
float _plus(float a, float b);
void swap(int* a, int* b);

int main()
{
    cout<<"a"<<endl;
    int a = 3;
    eq_plus(&a,4);
    cout<<a<<endl;    

    int zm1 = 5;
    int zm3 = 66;
    swap(zm1, zm3);
    cout << "zm1: " << zm1 << ", zm3: " << zm3 << std::endl; 
}

void eq_plus(int* a, int b)
{
    *a += b;
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// float _plus(float a, float b)
// {

// }