#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() { 
  int array[6] = {1,2,3,3,2,1};
  int n = 6;
  if (is_fanarray(array, n) == 0) {
   std::cout << "False" << std::endl;
  } else {
   std::cout << "True" << std::endl;
  }
  return 0;
}