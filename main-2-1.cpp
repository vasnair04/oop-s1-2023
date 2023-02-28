#include <iostream>

extern int min_element(int array[], int n);

int main(){
  int array[5] = {1,-4,3,4,5};
  int n = 5;
  std::cout << min_element(array, n) << std::endl;
  return 0;
}