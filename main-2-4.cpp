#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
  int array[5] = {1,2,3,4,5};
  int n = 5;
  if (is_ascending(array, n) == 0) {
   std::cout << "False" << std::endl;
  } else {
   std::cout << "True" << std::endl;
  }
  return 0;
}