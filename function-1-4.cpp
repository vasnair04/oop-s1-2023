#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n) {
  int sum_two_arrays = 0;
  for (int i=0;i<n;i++) {
    sum_two_arrays = sum_two_arrays + array[i] + secondarray[i];
  }
  return sum_two_arrays;
}