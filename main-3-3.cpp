#include <iostream>
#include <iomanip>

extern double weighted_average(int array[], int n);

int main(){
  int array[6] = {1,2,1,4,1,3};
  int n = 6;
  std::cout << std::fixed << std::setprecision(1) << weighted_average(array,n) << std::endl;
  return 0;
}