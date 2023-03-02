#include <iostream>

extern double sum_even(double array[], int n);

int main(){
  double array[6] = {1,2,3,4,5,6};
  int n = 6;
  std::cout << sum_even(array, n) << std::endl;
  return 0;
}