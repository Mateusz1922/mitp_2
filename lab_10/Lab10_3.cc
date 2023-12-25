#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
        
  long int size = 1000000;
  int *p = (int *)malloc(size*sizeof(char));

  for (int i = 0; i < size; ++i) {
    p[i] = i;
  }

  free(p);
           
  cout << "ok! ";
           
  return 0;
}
