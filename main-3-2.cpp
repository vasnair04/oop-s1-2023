#include <iostream> 

extern int median_array(int array[], int n);

int main() {
  int array[6] = {1,2,4,5,3,6};
  int n = 6;
  std::cout << median_array(array, n) << std::endl;
  return 0;
}