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

for (size_t i = 0; i < vector_size; ++i)
{
    size_t data_size = i+1;
    vectors[i].size = data_size;
    vectors[i].data = new float[data_size];
    for (size_t j = 0; j < data_size; ++j)
    {
      *(vectors[i].data+j) = j;
    }
    /* Your code here:
       1. allocate data of each vector with the size data_size
       2. initialize all elements to any value */

}
   int number;
   std::cout << "Type a number (must be in range <0-10>): ";
   std::cin >> number;
   if ((number > 0) && (number <= 10))
   {
      for (size_t i = 0; i < vector_size; ++i)
      {
         for (size_t j = 0; j < vector_size; ++j)
         {
            std::cout << *(vectors[i].data+j) << std::endl;
         }
      }
   }
  /* Your code here:
     1. ask user (cin>>) for number
     2. check if number is correct (0...data_size)
     3. if correct print all values from given vector */


  /* Your code here:
     1. release memory */
   for  (size_t i = 0; i < vector_size; ++i)
   {
      delete [] vectors[i].data;
   }

  return EXIT_SUCCESS;
}

/* OPTIONAL:
   change 
   Vector vectors[vector_size];
   to
   Vector *vectors[vector_size]; 
   adjust code and enjoy the extra points :-) */
