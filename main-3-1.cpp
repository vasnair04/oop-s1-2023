#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() { 
  int array[5] = {1,2,1,2,1};
  int n = 5;
  if (is_fanarray(array, n) == 0) {
   std::cout << "False" << std::endl;
  } else {
   std::cout << "True" << std::endl;
  }
  return 0;
}