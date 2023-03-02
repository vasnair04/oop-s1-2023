#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
  int array[5] = {5,3,3,2,1};
  int n = 5;
  if (is_descending(array, n) == 0) {
   std::cout << "False" << std::endl;
  } else {
   std::cout << "True" << std::endl;
  }
  return 0;
}