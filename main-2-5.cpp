#include <iostream>

extern bool is_decending(int array[], int n);

int main() {
  int array[5] = {5,3,3,2,1};
  int n = 5;
  if (is_decending(array, n) == 0) {
   std::cout << "False" << std::endl;
  } else {
   std::cout << "True" << std::endl;
  }
  return 0;
}