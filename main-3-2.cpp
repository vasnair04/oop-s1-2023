#include <iostream> 

extern int median_array(int array[], int n);

int main() {
  int array[7] = {1,2,4,5,3,6,7};
  int n = 7;
  std::cout << median_array(array, n) << std::endl;
  return 0;
}