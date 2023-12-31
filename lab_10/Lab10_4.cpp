#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
        
  long int size = 1000000;
  int *p = new int[size];

  for (int i = 0; i < size; ++i) 
  {
      p[i] = i;
  }

  delete [] p;
           
  cout << "ok!\n";
           
  return 0;
}
