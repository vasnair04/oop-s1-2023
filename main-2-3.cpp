#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
  int array[5] = {2,2,5,9,9};
  int n = 5;
  two_five_nine(array, n);
  return 0;
}