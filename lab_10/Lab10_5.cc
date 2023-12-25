#include <cstdlib>
#include <iostream>
using namespace std;

struct Vector {
  float *data;
  size_t size;
};

int main() {
  size_t vector_size = 10;
  Vector vectors[vector_size];

  for (size_t i=0; i<vector_size; ++i){
    size_t data_size = i+1;
    vectors[i].size = data_size;
    /* Your code here:
       1. allocate data of each vector with the size data_size
       2. initialize all ements to any value */
  }

  /* Your code here:
     1. ask user (cin>>) for number
     2. check if number is correct (0...data_size)
     3. if correct print all values from given vector */


  /* Your code here:
     1. release memory */

  return EXIT_SUCCESS;
}

/* OPTIONAL:
   change 
   Vector vectors[vector_size];
   to
   Vector *vectors[vector_size]; 
   adjust code and enjoy the extra points :-) */
